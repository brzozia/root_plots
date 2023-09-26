#include "CondFormats/DataRecord/interface/TotemAnalysisMaskRcd.h"
#include "CondFormats/DataRecord/interface/TotemReadoutRcd.h"
#include "CondFormats/PPSObjects/interface/TotemAnalysisMask.h"
#include "CondFormats/PPSObjects/interface/TotemDAQMapping.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/Framework/interface/one/EDAnalyzer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include <fstream>
#include <iostream>

//----------------------------------------------------------------------------------------------------

/**
 *\brief Writes to file the DAQ mapping loaded by TotemDAQMappingESSourceXML.
 **/
class WriteTotemDAQMapping : public edm::one::EDAnalyzer<> {
public:
  WriteTotemDAQMapping(const edm::ParameterSet &ps);
  ~WriteTotemDAQMapping() override {}

private:
  /// label of the CTPPS sub-system
  const std::string subSystemName_;
  std::ofstream outStream_;
  const bool readMask_;
  const bool readMap_;
  const edm::ESGetToken<TotemDAQMapping, TotemReadoutRcd> mappingToken_;
  const edm::ESGetToken<TotemAnalysisMask, TotemAnalysisMaskRcd> maskToken_;
  void analyze(const edm::Event &e, const edm::EventSetup &es) override;
};

WriteTotemDAQMapping::WriteTotemDAQMapping(const edm::ParameterSet &ps)
    : subSystemName_(ps.getUntrackedParameter<std::string>("subSystem")),
      outStream_(ps.getUntrackedParameter<std::string>("fileName"), std::ios_base::app),
      readMap_(ps.getUntrackedParameter<bool>("readMap")),
      readMask_(ps.getUntrackedParameter<bool>("readMask"))
      {
        if(readMap_){
          mappingToken_ = esConsumes(edm::ESInputTag("", subSystemName_));
        }
        if(readMask_){
          maskToken_ = esConsumes(edm::ESInputTag("", subSystemName_));
        }
      }

//----------------------------------------------------------------------------------------------------

void WriteTotemDAQMapping::analyze(const edm::Event &, edm::EventSetup const &es) {
  // get mapping

    auto mappingHandle = es.getHandle(mappingToken_);
    if (readMap_ && mappingHandle.isValid() && !mappingHandle.failedToGet()) {
      auto const &mapping = *mappingHandle;
      mapping.print(outStream_, subSystemName_);
    } else {
      edm::LogWarning("WriteTotemDAQMapping mapping") << "WriteTotemDAQMapping: No mapping found";
    }


  // get analysis mask to mask channels
      auto analysisMaskHandle = es.getHandle(maskToken_);
    if (readMask_ && analysisMaskHandle.isValid() && !analysisMaskHandle.failedToGet()) {
      auto const &analysisMask = *analysisMaskHandle;
      outStream_ << analysisMask;
    } else {
      edm::LogWarning("WriteTotemDAQMapping mask") << "WriteTotemDAQMapping: No analysis mask found";
    }

  outStream_.close();
}

//----------------------------------------------------------------------------------------------------

DEFINE_FWK_MODULE(WriteTotemDAQMapping);

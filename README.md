# root_plots

This repo contains programs which can be used in root, to choose selected plots and dump them to pdf file.

Code works with reconstruction results made for Diamond, Sampic, Strips detectors. Chooses plots which can be used to compare correctness of migration of mappings from XML to CondDb.

---
To use the code run:

```
root --web=off
```

Inside root:

```
.x test_plots_diamons_db.C
```

Sometimes it doesn't want to work.
You can then run in root
```
> TCanvas c1("c1", "c1",10,10,900,700);
> c1.Divide(2,3);
> .x test_plots_diamons_db.C
````

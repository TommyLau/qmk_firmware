# Tommy's Keychron Modification

> Change the switch to "Cable" and holding "Esc" while plugin the USB cable to enter DFU download mode.

## Keychron K12 Pro

```sh
make keychron/k12_pro/ansi/rgb:tommy
make keychron/k12_pro/ansi/rgb:tommy:flash
```

Source:
keyboards/keychron/k12_pro/ansi/rgb/keymaps/tommy

## Keychron V1 Max

```sh
make keychron/v1_max/ansi_encoder:tommy
make keychron/v1_max/ansi_encoder:tommy:flash
```

Source
keyboards/keychron/v1_max/ansi_encoder/keymaps/tommy

## Keychron K7 Max

```sh
make keychron/k7_max/ansi/rgb:tommy
make keychron/k7_max/ansi/rgb:tommy:flash
```

```sh
qmk compile -kb keychron/k7_max/ansi/rgb -km tommy
qmk flash -kb keychron/k7_max/ansi/rgb -km tommy
```

Source
keyboards/keychron/k7_max/ansi/rgb/keymaps/tommy

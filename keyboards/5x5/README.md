# 5x5

![5x5 Keyboard](https://i.imgur.com/zRbCdew.jpg)

A 5x5 modular PCB for 5x5, 5x10 and 5x15 keyboards. [More info on 40percent.club](http://www.40percent.club/2018/04/5x5.html).

- Keyboard Maintainer: QMK Community
- Hardware Supported: 5x5 PCB (up to 3 chained)
- Hardware Availability: [5x5 project on 40% Keyboards](http://www.40percent.club/2018/04/5x5.html)
- Firmware ported from the original [5x5 TMK Firmware by di0ib](https://github.com/di0ib/tmk_keyboard/tree/fa006e81b88d297fd8bb41e573a77c9d84527403/keyboard/5x5)

Make example for this keyboard (after setting up your build environment):

```sh
make 5x5:default
```

See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) then the [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.

## 5x5 Hardware Information

Firmware intended to be used with the [5x5 PCB Design by di0ib](http://www.40percent.club/2018/04/5x5.html) using an Arduino Micro (not Pro Micro) as a controller and diodes setup in a Column to Row manner.

### Pinout Diagram

| Pinout | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 10 | 11 | 12 | 13 | 14 | 15 |
|:-------|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|
| Row    | B2 | D1 | D0 | D4 | C6 |    |    |    |    |    |    |    |    |    |    |
| Column | D7 | E6 | B4 | B5 | B6 | B7 | D6 | F7 | F6 | F5 | F4 | F1 | F0 | B3 | B1 |

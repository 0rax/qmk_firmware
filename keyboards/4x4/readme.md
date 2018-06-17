# 4x4

![4x4 Keyboard: Numpad Edition](https://i.imgur.com/8akv6tM.jpg)

A 4x4 modular PCB for 4x4, 4x8, 4x12 and 4x16 keyboards. [More info on 40percent.club](http://www.40percent.club/2018/01/4x4x4x4x4.html).

- Keyboard Maintainer: QMK Community
- Hardware Supported: 4x4 PCB (up to 4 chained)
- Hardware Availability: [4x4 project on 40% Keyboards](http://www.40percent.club/2018/01/4x4x4x4x4.html)
- Firmware ported from the original [4x4 TMK Firmware by di0ib](https://github.com/di0ib/tmk_keyboard/tree/fa006e81b88d297fd8bb41e573a77c9d84527403/keyboard/4x4)

Make example for this keyboard (after setting up your build environment):

```sh
make 4x4:default
```

See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) then the [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.

## 4x4 Hardware Information

Firmware intended to be used with the [4x4 PCB Design by di0ib](http://www.40percent.club/2018/01/4x4x4x4x4.html) using an Arduino Micro (not Pro Micro) as a controller and diodes setup in a Column to Row manner.

### Pinout Diagram

| Pinout | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
|:-------|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|
| Row    | B2 | D1 | D0 | D4 |    |    |    |    |    |    |    |    |    |    |    |    |
| Column | C6 | D7 | E6 | B4 | B5 | B6 | B7 | D6 | F7 | F6 | F5 | F4 | F1 | F0 | B3 | B1 |

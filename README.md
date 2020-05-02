# PineTime Hypnos

<img src="hypnos/hypnos-photo.png" title="Background image: Night and Sleep by Evelyn De Morgan (1878)" width="240px" height="240px">

> **Hypnos**, son of Night and Darkness</br>
> He is said to be a calm and gentle god, as he helps humans in need and, due to their sleep, owns
> half of their lives.<sup>[1](https://en.wikipedia.org/wiki/Hypnos)</sup>

This is a work-in-progress [Zephyr](https://www.zephyrproject.org/)-based firmware for the
[PineTime](https://www.pine64.org/pinetime/) smartwatch focused on low power consumption.

It started as a fork of najnesnaj's [firmware toolkit](https://github.com/najnesnaj/pinetime-zephyr)
and is inspired by [PineTime Hermes](https://github.com/Dejvino/pinetime-hermes-firmware).

## Features

- [x] 100 % free software
- [x] Touch sensor: tap to light up the display
- [x] Clock: accurately increment current time
- [x] Build date and current time of host machine into the firmware image
- [x] Battery: get state of charge and whether it's charging
- [x] Graphics: show background image, time, date, battery and bluetooth status using LittlevGL
- [x] Set current time from bluetooth-connected device
- [x] Button: press to start time syncronization
- [x] Optional debug output via JLink RTT
- [ ] Set alarm
- [ ] Show notifications from bluetooth-connected device
- [ ] Firmware update over bluetooth
- [ ] Quick glance via lift-to-wake
- [ ] Wrist vibration
- [ ] Step counting


## Getting started

Follow Zephyr's [Getting Started Guide](https://docs.zephyrproject.org/latest/getting_started/index.html)
up to step 3) "Get the source code". Here you should run the commands below
instead of the ones in the guide:

```
$ mkdir ~/pinetime-hypnos
$ cd ~/pinetime-hypnos
$ west init -m https://github.com/endian-albin/pinetime-hypnos
$ west update
```

Then complete the remaining steps.

Optionally disable logging to save system resources:
```
$ export LOGGING="off"
```

Build and install the application:

```
$ west build -b pinetime hypnos
$ west flash
```

## Copying

The Hypnos application is under the Mozilla Public License 2.0 and
the documentation, including this README, is CC BY-SA 3.0.

Everything else should be under Apache 2.0, MIT/Expat, 3-clause BSD or similar
permissive licenses. Look for SPDX lines and check the source tree
history to be sure.

MPL 2.0 is a file-based copyleft license compatible with all commonly used
GNU licenses (LGPL/GPL/AGPL) as well as Apache 2.0.

![MPL compatibility](https://opensource.com/sites/default/files/styles/image-full-size/public/lead-images/OSCD_MPL2_520x292_FINAL.png?itok=6vv4XnEz)
<br />Image by Opensource.com

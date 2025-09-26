# Allium58 Firmware

Allium58 Vial firmware, based on Lily58/rev1. This firmware should be built using [vial-qmk](https://github.com/vial-kb/vial-qmk).

## Building

1. In the `vial-qmk/keyboards` directory, create a new folder called `allium58`.
2. Copy the contents of `src` into this new folder.
3. Update `keymaps/vial/config.h` to enable the desired features and handedness.
4. From the `vial-qmk` root, run:

```bash
make allium58:vial:uf2 CONVERT_TO=rp2040_ce
```

## Features

### Show Caps Lock Status

Displays whether Caps Lock is enabled.
Enable with:

```c
#define SHOW_CAPS
```

### Track Maximum WPM

Tracks the maximum words per minute (WPM) reached in the current session.
Enable with:

```c
#define TRACK_WPM_MAX
```

### Show GUI/Ctrl Swap Status

Displays the current status of GUI/Ctrl swap (swapped = macOS layout). Requires magic.
Enable with:

```c
#define SHOW_GUI_CTL_SWAP
```

### Track Session Keystrokes

Tracks the total number of keystrokes in the current session.
Enable with:

```c
#define TRACK_SESSION_KEYSTROKE_COUNT
```

### Status Side

Force the status screen to either the left or the right. If building separate firmware (`MASTER_RIGHT` on right and `MASTER_LEFT` on left) be sure to include:

```c
#define SPLIT_BUILD
```

Enable with one of the following:

```c
#define STATUS_LEFT
#define STATUS_RIGHT
```
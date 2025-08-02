## dwmblocks

My personal fork of dwmblocks.

### how to use

Clone, build, install:

```sh
git clone https://github.com/eoSalinas/dwmblocks
cd dwmblocks
make
sudo make install
```

Make sure you launch it in your WM startup file (`.xinitrc`, `autostart`, whatever):
```sh
dwmblocks &
```

Custom script for battery — [check it here](https://github.com/eoSalinas/scripts/blob/main/dwmblocks-battery)

This script must be placed at:
```sh
$XDG_CONFIG_HOME/scripts/dwmblocks-battery
# or usually:
~/.config/scripts/dwmblocks-battery
```


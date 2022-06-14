#!/bin/bash
wget -O /tmp/win.so https://github.com/Ade3164/alx-low_level_programming/tree/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so

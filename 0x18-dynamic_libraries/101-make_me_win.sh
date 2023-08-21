#!/bin/bash
wget -P /tmp https://github.com/KoeusIss/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/fakelib.so
export LD_PRELOAD=/tmp/fakelib.so

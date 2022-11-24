#!/bin/bash
DYLD_IMAGE_SUFFIX=_debug
export DYLD_IMAGE_SUFFIX
exec /Applications/qt/5.15.0/clang_64/bin/rcc "$@"

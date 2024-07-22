/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define MASTER_LEFT

//#define MASTER_RIGHT

//#define EE_HANDS

// fix dactyl split keyboard - slave not responding when flash
// reference :
// https://github.com/qmk/qmk_firmware/issues/9697
#define USE_SERIAL
#define SPLIT_USB_DETECT
//#define SPLIT_USB_TIMEOUT 2000

// fix a split keyboard doest't work when cold boot
// @niohdachi - reddit: https://www.reddit.com/r/ErgoMechKeyboards/comments/11qxmn2/comment/jc7w9li/
/*
    Another user had similar problem and this was part of my reply:

    SPLIT_USB_DETECT relies on USB data detection. During PC cold boot, USB enumeration may take longer than the default timeout (about 2000ms) for SPLIT_USB_DETECT, causing the detect to fail and the split kb becomes unresponsive.

    The simple code fix is to include the following lines in config.h and tune the custom timeout values on per case basis. Keep in mind you won't be able to enter bios with this workaround.
#define SPLIT_USB_TIMEOUT 10000
#define SPLIT_USB_TIMEOUT_POLL 10
*/
#define SPLIT_USB_TIMEOUT 10000
#define SPLIT_USB_TIMEOUT_POLL 10


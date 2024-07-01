/*
 * scrollPhatFont.h:
 *	Simple font for the Pimoroni Scroll Phat.
 *	Note: this is a very much reduced font - 5 pixels high and
 *	mostly 4 pixels wide - sometimes 5. Also only
 *	printable characters from space to _ uppercase only.
 *
 * Copyright (c) 2015-2016 Gordon Henderson.
 ***********************************************************************
 * This file is part of wiringPi:
 *	https://github.com/WiringPi/WiringPi/
 *
 *    wiringPi is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    wiringPi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public License
 *    along with wiringPi.  If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************
 */

static const int fontHeight = 5;

static unsigned char scrollPhatFont[] = {

    // 0x20, Space. Handeled as a special case in the code.

    0x0, // ....
    0x0, // ....
    0x0, // ....
    0x0, // ....
    0x0, // ....

         // 0x21, !

    0x1, // *
    0x1, // *
    0x1, // *
    0x0, // .
    0x1, // *

         // 0x22, "

    0x5, // *..*
    0x5, // *..*
    0x0, // ....
    0x0, // ....
    0x0, // ....

         // 0x23, #

    0x9, // *..*
    0xF, // ****
    0x9, // *..*
    0xF, // ****
    0x9, // *..*

         // 0x24, $

    0x1, // ..*.
    0x7, // .***
    0x2, // ..*.
    0xE, // ***.
    0x8, // ..*.

         // 0x25, %

    0x9, // *..*
    0x1, // ...*
    0x6, // .**.
    0x8, // *...
    0x9, // *..*

         // 0x26, &

    0x6, // .**.
    0x8, // *...
    0x4, // .*..
    0xA, // *.*.
    0x5, // .*.*

         // 0x27, '

    0x1, // .*
    0x2, // *.
    0x0, // ..
    0x0, // ..
    0x0, // ..

         // 0x28, (

    0x3, // ..**
    0x4, // .*..
    0x8, // *...
    0x4, // .*..
    0x3, // ..**

         // 0x29, )

    0xC, // **..
    0x2, // ..*.
    0x1, // ...*
    0x2, // ..*.
    0xC, // **..

         // 0x2A, *

    0x9, // *..*
    0x6, // .**.
    0xF, // ****
    0x6, // .**.
    0x9, // *..*

         // 0x2B, +

    0x6, // .**.
    0x6, // .**.
    0xF, // ****
    0x6, // .**.
    0x6, // .**.

         // 0x2C, ,

    0x0, // ..
    0x0, // ..
    0x0, // ..
    0x1, // .*
    0x2, // *.

         // 0x2D, -

    0x0, // ....
    0x0, // ....
    0xF, // ****
    0x0, // ....
    0x0, // ....

         // 0x2E, .

    0x0, // .
    0x0, // .
    0x0, // .
    0x0, // .
    0x1, // *

         // 0x2F, /

    0x1, // ...*
    0x3, // ..**
    0x4, // ..*.
    0xC, // **..
    0x8, // *...

         // 0x30, 0

    0x6, // .**.
    0x9, // *..*
    0x9, // *..*
    0x9, // *..*
    0x6, // .**.

         // 0x31, 1

    0x2, // ..*.
    0x6, // .**.
    0x2, // ..*.
    0x2, // ..*.
    0x7, // .***

         // 0x32, 2

    0x6, // .**.
    0x1, // ...*
    0x6, // .**.
    0x8, // *...
    0xF, // ****

         // 0x33, 3

    0xE, // ***.
    0x1, // ...*
    0xE, // ***.
    0x1, // ...*
    0xE, // ***.

         // 0x34, 4

    0x6, // .**.
    0xA, // *.*.
    0xF, // ****
    0x2, // ..*.
    0x2, // ..*.

         // 0x35, 5

    0xF, // ****
    0x8, // *...
    0xF, // ****
    0x1, // ...*
    0xE, // ***.

         // 0x36, 6

    0x2, // ..*.
    0x4, // .*..
    0xA, // *.*.
    0x9, // *..*
    0x6, // .**.

         // 0x37, 7

    0xF, // ****
    0x1, // ...*
    0x2, // ..*.
    0x4, // .*..
    0x8, // *...

         // 0x38, 8

    0x6, // .**.
    0x9, // *..*
    0x6, // .**.
    0x9, // *..*
    0x6, // .**.

         // 0x39, 9

    0x6, // .**.
    0x9, // *..*
    0x7, // .*.*
    0x1, // ..*.
    0x2, // .*..

         // 0x3A, :

    0x0, // .
    0x1, // *
    0x0, // .
    0x1, // *
    0x0, // .

         // 0x3B, ;

    0x0, // ..
    0x1, // .*
    0x0, // ..
    0x1, // .*
    0x2, // *.

         // 0x3C, <

    0x2, // ..*.
    0x4, // .*..
    0x8, // *...
    0x4, // .*..
    0x2, // ..*.

         // 0x3D, =

    0x0, // ....
    0xF, // ****
    0x0, // ....
    0xF, // ****
    0x0, // ....

         // 0x3E, >

    0x0, // .*..
    0x0, // ..*.
    0x0, // ...*
    0x0, // ..*.
    0x0, // .*..

         // 0x3F, ?

    0x6, // .**.
    0x1, // ...*
    0x2, // ..*.
    0x0, // ....
    0x2, // ..*.

         // 0x40, @

    0x6, // .**.
    0xD, // **.*
    0x8, // *...
    0x4, // .*..
    0x3, // ..**

         // 0x41, A

    0x6, // .**.
    0x9, // *..*
    0xF, // ****
    0x9, // *..*
    0x9, // *..*

         // 0x42, B

    0xE, // ***.
    0x9, // *..*
    0xE, // ***.
    0x9, // *..*
    0xE, // ***.

         // 0x43, C

    0x6, // .**.
    0x9, // *..*
    0x8, // *...
    0x9, // *..*
    0x6, // .**.

         // 0x44, D

    0xE, // ***.
    0x9, // *..*
    0x9, // *..*
    0x9, // *..*
    0xE, // ***.

         // 0x45, E

    0xF, // ****
    0x8, // *...
    0xE, // ***.
    0x8, // *...
    0xF, // ****

         // 0x46, F

    0xF, // ****
    0x8, // *...
    0xE, // ***.
    0x8, // *...
    0x8, // *...

         // 0x47, G

    0x6, // .**.
    0x9, // *..*
    0x8, // *...
    0xB, // *.**
    0x6, // .**.

         // 0x48, H

    0x9, // *..*
    0x9, // *..*
    0xF, // ****
    0x9, // *..*
    0x9, // *..*

         // 0x49, I

    0x7, // ***
    0x2, // .*.
    0x2, // .*.
    0x2, // .*.
    0x7, // ***

         // 0x4A, J

    0x7, // .***
    0x2, // ..*.
    0x2, // ..*.
    0xA, // *.*.
    0x4, // .*..

         // 0x4B, K

    0x9, // *..*
    0xA, // *.*.
    0xC, // **..
    0xA, // *.*.
    0x9, // *..*

         // 0x4C, L

    0x4, // *..
    0x4, // *..
    0x4, // *..
    0x4, // *..
    0x7, // ***

         // 0x4D, M

    0x11, // *...*
    0x1B, // **.**
    0x15, // *.*.*
    0x11, // *...*
    0x11, // *...*

          // 0x4E, N

    0x9, // *..*
    0xD, // **.*
    0xB, // *.**
    0x9, // *..*
    0x9, // *..*

         // 0x4F, O

    0x6, // .**.
    0x9, // *..*
    0x9, // *..*
    0x9, // *..*
    0x6, // .**.

         // 0x50, P

    0xE, // ***.
    0x9, // *..*
    0xE, // ***.
    0x8, // *...
    0x8, // *...

         // 0x51, Q

    0x6, // .**.
    0x9, // *..*
    0x9, // *..*
    0xA, // *.*.
    0x5, // .*.*

         // 0x52, R

    0xE, // ***.
    0x9, // *..*
    0xF, // ***.
    0xA, // *.*.
    0x9, // *..*

         // 0x53, S

    0x6, // .**.
    0x8, // *...
    0x6, // .**.
    0x1, // ...*
    0x6, // .**.

         // 0x54, T

    0x7, // .***
    0x2, // ..*.
    0x2, // ..*.
    0x2, // ..*.
    0x2, // ..*.

         // 0x55, U

    0x9, // *..*
    0x9, // *..*
    0x9, // *..*
    0x9, // *..*
    0x6, // .**.

         // 0x56, V

    0x11, // *...*
    0x11, // *...*
    0x11, // *...*
    0x0A, // .*.*.
    0x04, // ..*..

          // 0x57, W

    0x11, // *...*
    0x11, // *...*
    0x11, // *...*
    0x15, // *.*.*
    0x1B, // **.**

          // 0x58, X

    0x9, // *..*
    0x9, // *..*
    0x6, // .**.
    0x9, // *..*
    0x9, // *..*

         // 0x59, Y

    0x11, // *...*
    0x0A, // .*.*.
    0x04, // ..*..
    0x04, // ..*..
    0x04, // ..*..

          // 0x5A, Z

    0xF, // ****
    0x1, // ...*
    0x6, // .**.
    0x8, // *...
    0xF, // ****

         // 0x5B, [

    0xE, // ***.
    0x8, // *...
    0x8, // *...
    0x8, // *...
    0xE, // ***.

         // 0x5C, Backslash

    0x8, // *...
    0xC, // **..
    0x6, // .**.
    0x3, // ..**
    0x1, // ...*

         // 0x5D, ]

    0x7, // .***
    0x1, // ...*
    0x1, // ...*
    0x1, // ...*
    0x7, // .***

         // 0x5E, ^

    0x6, // .**.
    0x9, // *..*
    0x0, // ....
    0x0, // ....
    0x0, // ....

         // 0x5F, _

    0x0, // ....
    0x0, // ....
    0x0, // ....
    0x0, // ....
    0xF, // ****
};

<<<<<<< HEAD

/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * About Marlin
 *
 * This firmware is a mashup between Sprinter and grbl.
 *  - https://github.com/kliment/Sprinter
 *  - https://github.com/simen/grbl/tree
 */

#include "MarlinConfig.h"

#if ENABLED(ULTRA_LCD)
  #if ENABLED(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(LCD_I2C_TYPE_MCP23017) || ENABLED(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif ENABLED(LCM1602)
    #include <Wire.h>
    #include <LCD.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(DOGLCD)
    #include <U8glib.h> // library for graphics LCD by Oli Kraus (https://github.com/olikraus/U8glib_Arduino)
  #else
    #include <LiquidCrystal.h> // library for character LCD
  #endif
#endif

#if HAS_DIGIPOTSS
  #include <SPI.h>
#endif

#if ENABLED(DIGIPOT_I2C)
  #include <Wire.h>
#endif

#if ENABLED(HAVE_TMCDRIVER)
  #include <SPI.h>
  #include <TMC26XStepper.h>
#endif

#if ENABLED(HAVE_TMC2130)
  #include <SPI.h>
  #include <TMC2130Stepper.h>
#endif

#if ENABLED(HAVE_L6470DRIVER)
  #include <SPI.h>
  #include <L6470.h>
#endif
=======
/*
================================================================================

  Marlin Firmware

  (c) 2011-2018 MarlinFirmware
  Portions of Marlin are (c) by their respective authors.
  All code complies with GPLv2 and/or GPLv3

================================================================================

Greetings! Thank you for choosing Marlin as your 3D printer firmware.

To configure Marlin you must edit Configuration.h and Configuration_adv.h
located in the root 'Marlin' folder. Check the example_configurations folder to
see if there's a more suitable starting-point for your specific hardware.

Before diving in, we recommend the following essential links:

Marlin Firmware Official Website

  - http://marlinfw.org/
    The official Marlin Firmware website contains the most up-to-date
    documentation. Contributions are always welcome!

Configuration

  - https://www.youtube.com/watch?v=3gwWVFtdg-4
    A good 20-minute overview of Marlin configuration by Tom Sanladerer.
    (Applies to Marlin 1.0.x, so Jerk and Acceleration should be halved.)
    Also... https://www.google.com/search?tbs=vid%3A1&q=configure+marlin

  - http://marlinfw.org/docs/configuration/configuration.html
    Marlin's configuration options are explained in more detail here.

Getting Help

  - http://forums.reprap.org/list.php?415
    The Marlin Discussion Forum is a great place to get help from other Marlin
    users who may have experienced similar issues to your own.

  - https://github.com/MarlinFirmware/Marlin/issues
    With a free GitHub account you can provide us with feedback, bug reports,
    and feature requests via the Marlin Issue Queue.

Contributing

  - http://marlinfw.org/docs/development/contributing.html
    If you'd like to contribute to Marlin, read this first!

  - http://marlinfw.org/docs/development/coding_standards.html
    Before submitting code get to know the Coding Standards.
*/
>>>>>>> 5d96a6d983c065403216ed52a8c92ed22dc268ba

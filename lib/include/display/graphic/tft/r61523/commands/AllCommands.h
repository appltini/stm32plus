/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */


#pragma once


namespace stm32plus {
  namespace display {
    namespace r61523 {

      /*
       * The command set as documented in v1.0.1 of the datasheet
       */

      enum E {
        NOP                     = 0x00,
        SOFTWARE_RESET          = 0x01,
        SLEEP_IN                = 0x10,
        SLEEP_OUT               = 0x11,
        PARTIAL_MODE_ON         = 0x12,
        NORMAL_DISPLAY_MODE_ON  = 0x13,
        DISPLAY_OFF             = 0x28,
        DISPLAY_ON              = 0x29,
        SET_COLUMN_ADDRESS      = 0x2a,
        SET_PAGE_ADDRESS        = 0x2b,
        MEMORY_WRITE            = 0x2c,
        MEMORY_READ             = 0x2e,
        PARTIAL_AREA            = 0x30,
        TEARING_EFFECT_LINE_OFF = 0x34,
        TEARING_EFFECT_LINE_ON  = 0x35,
        SET_ADDRESS_MODE        = 0x36,
        IDLE_MODE_OFF           = 0x38,
        IDLE_MODE_ON            = 0x39,
        SET_PIXEL_FORMAT        = 0x3a,
        MCAP                    = 0xb0,
        SET_FRAME_AND_INTERFACE = 0xb1,
        GAMMA_SET_A             = 0xc8,
        GAMMA_SET_B             = 0xc9,
        GAMMA_SET_C             = 0xca
      };
    }
  }
}

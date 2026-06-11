/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#undef USE_KNX
#undef USE_SONOFF_SPM
#undef USE_DISPLAY_TM1621_SONOFF

#undef USE_WEBCAM
#undef USE_TIMELINE
#undef USE_WS2812_DYNAMIC
#undef USE_BUZZER
#undef USE_SERVO
#undef USE_SHUTTER
#undef USE_EXS_ENABLE
#undef USE_SONOFF_IFAN
#undef USE_ARMTRONIX_DIMMERS
#undef USE_TCP_BRIDGE
#undef USE_OPENTHERM
#undef USE_SMOKE_CO_DETECTOR
#undef USE_RC_SWITCH
#undef USE_RFSENDER
#undef USE_RF_RECEIVER
#undef USE_I2C
#undef USE_SPI
#undef USE_AZDD6
#undef USE_PCF8574
#undef USE_MCP230xx
#undef USE_SENS_MAX31855
#undef USE_SENS_MAX31865
#undef USE_SENS_DHT
#undef USE_DS18x20

#ifdef USE_DISPLAY
#undef USE_DISPLAY
#endif
#ifdef USE_HOME_ASSISTANT
#undef USE_HOME_ASSISTANT
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_

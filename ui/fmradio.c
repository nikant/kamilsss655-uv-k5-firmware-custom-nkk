/* Original work Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Modified work Copyright 2024 kamilsss655
 * https://github.com/kamilsss655
 *
 * Copyright 2024 kamilsss655
 * https://github.com/kamilsss655
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifdef ENABLE_FMRADIO

#include <string.h>

#include "app/fm.h"
#include "driver/st7565.h"
#include "external/printf/printf.h"
#include "settings.h"
#include "ui/helper.h"
#ifdef ENABLE_FM_INPUT
	#include "ui/inputbox.h"
#endif

void UI_DisplayFM(void)
{
	char         String[16];

	memset(gFrameBuffer, 0, sizeof(gFrameBuffer));

	memset(String, 0, sizeof(String));
	strcpy(String, "FM");
	UI_PrintString(String, 0, 127, 0, 12);

	memset(String, 0, sizeof(String));

	UI_PrintString(String, 0, 127, 2, 10);

	memset(String, 0, sizeof(String));

	#ifdef ENABLE_FM_INPUT
		if (gInputBoxIndex != 0) {
			const char * ascii = INPUTBOX_GetAscii();
			sprintf(String, "%.3s.%.1s",ascii, ascii + 3);			
		} else 
	#endif	
		{
			sprintf(String, "%3d.%d", gEeprom.FM_FrequencyPlaying / 10, gEeprom.FM_FrequencyPlaying % 10);
		}

/*
		if (gInputBoxIndex == 0) {
			sprintf(String, "%3d.%d", gEeprom.FM_FrequencyPlaying / 10, gEeprom.FM_FrequencyPlaying % 10);
		} else {
			const char * ascii = INPUTBOX_GetAscii();
			sprintf(String, "%.3s.%.1s",ascii, ascii + 3);
		}
*/

	UI_DisplayFrequency(String, 32, 4, true);			

	ST7565_BlitFullScreen();
}

#endif

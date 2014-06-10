/* unofficial gameplaySP kai
 *
 * Copyright (C) 2006 Exophase <exophase@gmail.com>
 * Copyright (C) 2007 takka <takka@tfact.net>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef MESSAGE_H
#define MESSAGE_H


#define BG_NO_FILL (-1)
#define FONT_BATTERY0
#define FONT_BATTERY1
#define FONT_BATTERY2
#define FONT_BATTERY3
#define FONT_GBA_ICON

#define FONT_KEY_ICON
#define FONT_R_TRIGGER
#define FONT_L_TRIGGER
#define FONT_CURSOR_RIGHT
#define FONT_CURSOR_LEFT
#define FONT_CURSOR_UP
#define FONT_CURSOR_DOWN
#define FONT_CURSOR_RIGHT_FILL
#define FONT_CURSOR_LEFT_FILL
#define FONT_CURSOR_UP_FILL
#define FONT_CURSOR_DOWN_FILL
#define FONT_UP_DIRECTORY

#define MSG  message

enum MESSAGE_ITEM
{
  MSG_BROWSER_HELP,

  MSG_MENU_DATE_FMT_0,
  MSG_MENU_DATE_FMT_1,

  MSG_MAIN_MENU_TITLE,

  MSG_MAIN_MENU_0,
  MSG_MAIN_MENU_1,
  MSG_MAIN_MENU_2,
  MSG_MAIN_MENU_3,
  MSG_MAIN_MENU_4,
  MSG_MAIN_MENU_5,
  MSG_MAIN_MENU_6,
  MSG_MAIN_MENU_7,
  MSG_MAIN_MENU_8,
  MSG_MAIN_MENU_9,
  MSG_MAIN_MENU_10,
  MSG_MAIN_MENU_11,

  MSG_MAIN_MENU_HELP_0,
  MSG_MAIN_MENU_HELP_1,
  MSG_MAIN_MENU_HELP_2,
  MSG_MAIN_MENU_HELP_3,
  MSG_MAIN_MENU_HELP_4,
  MSG_MAIN_MENU_HELP_5,
  MSG_MAIN_MENU_HELP_6,
  MSG_MAIN_MENU_HELP_7,
  MSG_MAIN_MENU_HELP_8,
  MSG_MAIN_MENU_HELP_9,
  MSG_MAIN_MENU_HELP_10,
  MSG_MAIN_MENU_HELP_11,

  MSG_OPTION_MENU_TITLE,

  MSG_OPTION_MENU_0,
  MSG_OPTION_MENU_1,
  MSG_OPTION_MENU_2,
  MSG_OPTION_MENU_3,
  MSG_OPTION_MENU_4,
  MSG_OPTION_MENU_5,
  MSG_OPTION_MENU_6,
  MSG_OPTION_MENU_7,
  MSG_OPTION_MENU_8,
  MSG_OPTION_MENU_9,
  MSG_OPTION_MENU_10,
  MSG_OPTION_MENU_11,

  MSG_OPTION_MENU_HELP_0,
  MSG_OPTION_MENU_HELP_1,
  MSG_OPTION_MENU_HELP_2,
  MSG_OPTION_MENU_HELP_3,
  MSG_OPTION_MENU_HELP_4,
  MSG_OPTION_MENU_HELP_5,
  MSG_OPTION_MENU_HELP_6,
  MSG_OPTION_MENU_HELP_7,
  MSG_OPTION_MENU_HELP_8,
  MSG_OPTION_MENU_HELP_9,
  MSG_OPTION_MENU_HELP_10,
  MSG_OPTION_MENU_HELP_11,

  MSG_STATE_MENU_DATE_FMT_0,
  MSG_STATE_MENU_DATE_FMT_1,
  MSG_STATE_MENU_DATE_NONE_0,
  MSG_STATE_MENU_DATE_NONE_1,

  MSG_STATE_MENU_STATE_NONE,

  MSG_STATE_MENU_TITLE,

  MSG_STATE_MENU_0,
  MSG_STATE_MENU_1,
  MSG_STATE_MENU_2,

  MSG_STATE_MENU_HELP_0,
  MSG_STATE_MENU_HELP_1,
  MSG_STATE_MENU_HELP_2,

  MSG_PAD_MENU_TITLE,

  MSG_PAD_MENU_0,
  MSG_PAD_MENU_1,
  MSG_PAD_MENU_2,
  MSG_PAD_MENU_3,
  MSG_PAD_MENU_4,
  MSG_PAD_MENU_5,
  MSG_PAD_MENU_6,
  MSG_PAD_MENU_7,
  MSG_PAD_MENU_8,
  MSG_PAD_MENU_9,
  MSG_PAD_MENU_10,
  MSG_PAD_MENU_11,
  MSG_PAD_MENU_12,

  MSG_PAD_MENU_HELP_0,
  MSG_PAD_MENU_HELP_1,

  MSG_PAD_MENU_CFG_0,
  MSG_PAD_MENU_CFG_1,
  MSG_PAD_MENU_CFG_2,
  MSG_PAD_MENU_CFG_3,
  MSG_PAD_MENU_CFG_4,
  MSG_PAD_MENU_CFG_5,
  MSG_PAD_MENU_CFG_6,
  MSG_PAD_MENU_CFG_7,
  MSG_PAD_MENU_CFG_8,
  MSG_PAD_MENU_CFG_9,
  MSG_PAD_MENU_CFG_10,
  MSG_PAD_MENU_CFG_11,
  MSG_PAD_MENU_CFG_12,
  MSG_PAD_MENU_CFG_13,
  MSG_PAD_MENU_CFG_14,
  MSG_PAD_MENU_CFG_15,
  MSG_PAD_MENU_CFG_16,
  MSG_PAD_MENU_CFG_17,
  MSG_PAD_MENU_CFG_18,
  MSG_PAD_MENU_CFG_19,

  MSG_A_PAD_MENU_TITLE,

  MSG_A_PAD_MENU_0,
  MSG_A_PAD_MENU_1,
  MSG_A_PAD_MENU_2,
  MSG_A_PAD_MENU_3,
  MSG_A_PAD_MENU_4,
  MSG_A_PAD_MENU_5,
  MSG_A_PAD_MENU_6,

  MSG_A_PAD_MENU_HELP_0,
  MSG_A_PAD_MENU_HELP_1,
  MSG_A_PAD_MENU_HELP_2,

  MSG_NON_LOAD_GAME,

  MSG_DAYW_0,
  MSG_DAYW_1,
  MSG_DAYW_2,
  MSG_DAYW_3,
  MSG_DAYW_4,
  MSG_DAYW_5,
  MSG_DAYW_6,

  MSG_YES,
  MSG_NO,

  MSG_ON,
  MSG_OFF,

  MSG_ENABLED,
  MSG_DISABLED,

  MSG_AUTO,
  MSG_MANUAL,

  MSG_EXITONLY,

  MSG_LOAD,
  MSG_SAVE,

  MSG_SCN_SCALED_NONE,
  MSG_SCN_SCALED_X15_GU,
  MSG_SCN_SCALED_X15_SW,
  MSG_SCN_SCALED_USER,

  MSG_LANG_JAPANESE,
  MSG_LANG_ENGLISH,

  MSG_SS_DATE_FMT_0,
  MSG_SS_DATE_FMT_1,

  MSG_ERR_SET_DIR_0,
  MSG_ERR_SET_DIR_1,
  MSG_ERR_SET_DIR_2,

  MSG_ERR_SS_PNG_0,
  MSG_ERR_SS_PNG_1,

  MSG_LOADING_ROM,
  MSG_SEARCHING_BACKUP_ID,

  MSG_GBA_SLEEP_MODE,

  MSG_ERR_LOAD_DIR_INI,

  MSG_ERR_BIOS_NONE,

  MSG_ERR_LOAD_GAMEPACK,
  MSG_ERR_OPEN_GAMEPACK,

  MSG_ERR_START_CALLBACK_THREAD,

  MSG_ERR_RESERVE_AUDIO_CHANNEL,
  MSG_ERR_START_SOUND_THREAD,

  MSG_ERR_MALLOC,

  MSG_ERR_CONT,
  MSG_ERR_QUIT,

  MSG_BLANK,

  MSG_END
};

extern const char *message[MSG_END];

#endif /* MESSAGE_H */

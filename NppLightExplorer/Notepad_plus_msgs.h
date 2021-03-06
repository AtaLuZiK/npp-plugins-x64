//this file is part of notepad++
//Copyright (C)2003 Don HO ( donho@altern.org )
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either
//version 2 of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#ifndef NOTEPAD_PLUS_MSGS_H
#define NOTEPAD_PLUS_MSGS_H

enum LangType {L_TXT, L_PHP , L_C, L_CPP, L_CS, L_OBJC, L_JAVA, L_RC,\
			   L_HTML, L_XML, L_MAKEFILE, L_PASCAL, L_BATCH, L_INI, L_NFO, L_USER,\
			   L_ASP, L_SQL, L_VB, L_JS, L_CSS, L_PERL, L_PYTHON, L_LUA,\
			   L_TEX, L_FORTRAN, L_BASH, L_FLASH, L_NSIS, L_TCL, L_LISP, L_SCHEME,\
			   L_ASM, L_DIFF, L_PROPS, L_PS, L_RUBY, L_SMALLTALK, L_VHDL, L_KIX, L_AU3,\
			   L_CAML, L_ADA, L_VERILOG, L_MATLAB, L_HASKELL, L_INNO, L_SEARCHRESULT, L_CMAKE,\
			   // The end of enumated language type, so it should be always at the end
			   L_END};
enum winVer{WV_UNKNOWN, WV_WIN32S, WV_95, WV_98, WV_ME, WV_NT, WV_W2K, WV_XP, WV_S2003, WV_XPX64, WV_VISTA};

//Here you can find how to use these messages : http://notepad-plus.sourceforge.net/uk/plugins-HOWTO.php 
#define NOTEPADPLUS_USER   (WM_USER + 1000)

	#define WM_GETCURRENTSCINTILLA  (NOTEPADPLUS_USER + 4)
	#define WM_GETCURRENTLANGTYPE  (NOTEPADPLUS_USER + 5)
	#define WM_SETCURRENTLANGTYPE  (NOTEPADPLUS_USER + 6)

	#define WM_NBOPENFILES			(NOTEPADPLUS_USER + 7)
		#define ALL_OPEN_FILES			0
		#define PRIMARY_VIEW			1
		#define SECOND_VIEW				2

	#define WM_GETOPENFILENAMES		(NOTEPADPLUS_USER + 8)
	#define WM_CANCEL_SCINTILLAKEY	(NOTEPADPLUS_USER + 9)
	#define WM_BIND_SCINTILLAKEY	(NOTEPADPLUS_USER + 10)
	#define WM_SCINTILLAKEY_MODIFIED (NOTEPADPLUS_USER + 11)

	#define WM_MODELESSDIALOG		 (NOTEPADPLUS_USER + 12)
		#define MODELESSDIALOGADD		0
		#define MODELESSDIALOGREMOVE	1

	#define WM_NBSESSIONFILES (NOTEPADPLUS_USER + 13)
	#define WM_GETSESSIONFILES (NOTEPADPLUS_USER + 14)
	#define WM_SAVESESSION (NOTEPADPLUS_USER + 15)
	#define WM_SAVECURRENTSESSION (NOTEPADPLUS_USER + 16)

		struct sessionInfo {
			TCHAR* sessionFilePathName;
			int nbFile;
			TCHAR** files;
		};

	#define WM_GETOPENFILENAMES_PRIMARY (NOTEPADPLUS_USER + 17)
	#define WM_GETOPENFILENAMES_SECOND (NOTEPADPLUS_USER + 18)
	#define WM_GETPARENTOF (NOTEPADPLUS_USER + 19)
	#define WM_CREATESCINTILLAHANDLE (NOTEPADPLUS_USER + 20)
	#define WM_DESTROYSCINTILLAHANDLE (NOTEPADPLUS_USER + 21)
	#define WM_GETNBUSERLANG (NOTEPADPLUS_USER + 22)

	#define WM_GETCURRENTDOCINDEX (NOTEPADPLUS_USER + 23)
		#define MAIN_VIEW 0
		#define SUB_VIEW 1

	#define WM_SETSTATUSBAR (NOTEPADPLUS_USER + 24)
		#define STATUSBAR_DOC_TYPE 0
		#define STATUSBAR_DOC_SIZE 1
		#define STATUSBAR_CUR_POS 2
		#define STATUSBAR_EOF_FORMAT 3
		#define STATUSBAR_UNICODE_TYPE 4
		#define STATUSBAR_TYPING_MODE 5

	#define WM_GETMENUHANDLE (NOTEPADPLUS_USER + 25)
		#define NPPPLUGINMENU 0

	#define WM_ENCODE_SCI (NOTEPADPLUS_USER + 26)
	//ascii file to unicode
	//int WM_ENCODE_SCI(MAIN_VIEW/SUB_VIEW, 0)
	//return new unicodeMode
	
	#define WM_DECODE_SCI (NOTEPADPLUS_USER + 27)
	//unicode file to ascii
	//int WM_DECODE_SCI(MAIN_VIEW/SUB_VIEW, 0)
	//return old unicodeMode

	#define WM_ACTIVATE_DOC (NOTEPADPLUS_USER + 28)
	//void WM_ACTIVATE_DOC(int index2Activate, int view)

	#define WM_LAUNCH_FINDINFILESDLG (NOTEPADPLUS_USER + 29)
	//void WM_LAUNCH_FINDINFILESDLG(TCHAR * dir2Search, TCHAR * filtre)

	#define WM_DMM_SHOW (NOTEPADPLUS_USER + 30)
	#define WM_DMM_HIDE	(NOTEPADPLUS_USER + 31)
	#define WM_DMM_UPDATEDISPINFO (NOTEPADPLUS_USER + 32)
	//void WM_DMM_xxx(0, tTbData->hClient)

	#define WM_DMM_REGASDCKDLG (NOTEPADPLUS_USER + 33)
	//void WM_DMM_REGASDCKDLG(0, &tTbData)

	#define WM_LOADSESSION (NOTEPADPLUS_USER + 34)
	//void WM_LOADSESSION(0, const TCHAR* file name)

	#define WM_DMM_VIEWOTHERTAB (NOTEPADPLUS_USER + 35)
	//void WM_DMM_VIEWOTHERTAB(0, tTbData->hClient)

	#define WM_RELOADFILE (NOTEPADPLUS_USER + 36)
	//BOOL WM_RELOADFILE(BOOL withAlert, TCHAR *filePathName2Reload)

	#define WM_SWITCHTOFILE (NOTEPADPLUS_USER + 37)
	//BOOL WM_SWITCHTOFILE(0, TCHAR *filePathName2switch)

	#define WM_SAVECURRENTFILE (NOTEPADPLUS_USER + 38)
	//BOOL WM_SWITCHTOFILE(0, 0)

	#define WM_SAVEALLFILES	(NOTEPADPLUS_USER + 39)
	//BOOL WM_SAVEALLFILES(0, 0)

	#define WM_PIMENU_CHECK	(NOTEPADPLUS_USER + 40)
	//void WM_PIMENU_CHECK(UINT	funcItem[X]._cmdID, TRUE/FALSE)

	#define WM_ADDTOOLBARICON (NOTEPADPLUS_USER + 41)
	//void WM_ADDTOOLBARICON(UINT funcItem[X]._cmdID, toolbarIcons icon)
		struct toolbarIcons {
			HBITMAP	hToolbarBmp;
			HICON	hToolbarIcon;
		};

	#define WM_GETWINDOWSVERSION (NOTEPADPLUS_USER + 42)
	//winVer WM_GETWINDOWSVERSION(0, 0)

	#define WM_DMM_GETPLUGINHWNDBYNAME (NOTEPADPLUS_USER + 43)
	//HWND WM_DMM_GETPLUGINHWNDBYNAME(const TCHAR *windowName, const TCHAR *moduleName)
	// if moduleName is NULL, then return value is NULL
	// if windowName is NULL, then the first found window handle which matches with the moduleName will be returned

// Notification code
#define NPPN_FIRST 1000
	#define NPPN_READY (NPPN_FIRST + 1) // To notify plugins that all the procedures of launchment of notepad++ are done.
	//scnNotification->nmhdr.code = NPPN_READY;
	//scnNotification->nmhdr.hwndFrom = hwndNpp;
	//scnNotification->nmhdr.idFrom = 0;

	#define NPPN_TB_MODIFICATION (NPPN_FIRST + 2) // To notify plugins that toolbar icons can be registered
	//scnNotification->nmhdr.code = NPPN_TB_MODIFICATION;
	//scnNotification->nmhdr.hwndFrom = hwndNpp;
	//scnNotification->nmhdr.idFrom = 0;

	#define NPPN_FILE_BEFORECLOSE (NPPN_FIRST + 3) // To notify plugins that the current file is about to be closed
	//scnNotification->nmhdr.code = NPPN_FILE_BEFORECLOSE;
	//scnNotification->nmhdr.hwndFrom = hwndNpp;
	//scnNotification->nmhdr.idFrom = 0;

#define	RUNCOMMAND_USER    (WM_USER + 3000)
	#define WM_GET_FULLCURRENTPATH (RUNCOMMAND_USER + FULL_CURRENT_PATH)
	#define WM_GET_CURRENTDIRECTORY (RUNCOMMAND_USER + CURRENT_DIRECTORY)
	#define WM_GET_FILENAME (RUNCOMMAND_USER + FILE_NAME)
	#define WM_GET_NAMEPART (RUNCOMMAND_USER + NAME_PART)
	#define WM_GET_EXTPART (RUNCOMMAND_USER + EXT_PART)
	#define WM_GET_CURRENTWORD (RUNCOMMAND_USER + CURRENT_WORD)
	#define WM_GET_NPPDIRECTORY (RUNCOMMAND_USER + NPP_DIRECTORY)

		#define VAR_NOT_RECOGNIZED 0
		#define FULL_CURRENT_PATH 1
		#define CURRENT_DIRECTORY 2
		#define FILE_NAME 3
		#define NAME_PART 4
		#define EXT_PART 5
		#define CURRENT_WORD 6
		#define NPP_DIRECTORY 7

#define	MACRO_USER    (WM_USER + 4000)
	#define WM_ISCURRENTMACRORECORDED (MACRO_USER + 01)
	#define WM_MACRODLGRUNMACRO       (MACRO_USER + 02)




#endif //NOTEPAD_PLUS_MSGS_H

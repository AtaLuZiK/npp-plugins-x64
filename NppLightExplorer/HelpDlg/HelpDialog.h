/*
This file is part of Function List Plugin for Notepad++
Copyright (C)2005-2007 Jens Lorenz <jens.plugin.npp@gmx.de>

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/


#ifndef HELP_DEFINE_H
#define HELP_DEFINE_H

#include "StaticDialog.h"
#include "PluginInterface.h"
#include "URLCtrl.h"

#include "resource.h"



class HelpDlg : public StaticDialog
{

public:
	HelpDlg() : StaticDialog() {};
    
    void init(HINSTANCE hInst, NppData nppData)
	{
		_nppData = nppData;
		Window::init(hInst, nppData._nppHandle);
	};

   	void doDialog();

    virtual void destroy() {
        _emailLink.destroy();
        _urlNppPlugins.destroy();
    };


protected :
	virtual BOOL CALLBACK run_dlgProc(UINT message, WPARAM wParam, LPARAM lParam);

private:
	/* Handles */
	NppData			_nppData;
    HWND			_HSource;
	
	/* for eMail */
    URLCtrl			_emailLink;
	URLCtrl			_urlNppPlugins;
};

#endif
// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__F730728A_6F06_11D2_B451_00C04F6FF8BD__INCLUDED_)
#define AFX_STDAFX_H__F730728A_6F06_11D2_B451_00C04F6FF8BD__INCLUDED_

#define WINVER 0x500

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#include <afxcview.h>		// CTreeView & CListView

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxsock.h>		// MFC socket extensions

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#define RESOURCER_EXE

#endif // !defined(AFX_STDAFX_H__F730728A_6F06_11D2_B451_00C04F6FF8BD__INCLUDED_)

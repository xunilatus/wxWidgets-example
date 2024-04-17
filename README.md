# wxWidgets-example

1)Install CodeBlocks 17 x86

2)Set MinGW G++ PATH% in windows environment variables

3)Extract WxWidgets to C:\
cd C:\<wxWidgets\build\msw
# COMPILE WIDGETS AS FOLLOWS SO YOU DONT HAVE TO PACKAGE A SEPERATE DLL FILE TO ALLOW PROGRAMS TO RUN
mingw32-make -f makefile.gcc BUILD=release SHARED=0 MONOLITHIC=1 UNICODE=1 CXXfLAGS="-fno-keep-inline-dllexport"



------- Setting up widgets with wizard ----

Refer to pdf for further instruction

Configuring the Global variables
base = C:\wxwidgets

When Starting a project from the wizard:
Wizard> 'create new project'> wxWidgets project
leave skip this page unchecked > next
wxWid8.0 should already be selected > next
name and title the project on the next 2 pages
>next
Peferred GUI Builder
	select 'wxSmith'
Application Type
	'Frame Based'
> next
Compiler = GNU GCC Compiler
	'deselect' "create "Debug" configuration"
'keep selected "release" configuration"
> next
wxWidgets Library Settings
	 
	'DON'T use wxwidgets DLL'//IF YOU COMPILED WXWIDGETS AS 'SHARED=0' THIS ALLOWS APPS U BUILD TO FUNCTION WITHOUT 10MB DLL
	'wxWidgets is built as a monolithic library'
	'enable unicode'
Miscellaneous Settings
'leave all deselected'
> next


*CodeBlocks 17
*wxWidgets 2.8
OLDER VERSIONS BECAUSE YOU WILL SPEND LESS TIME CONFIGURING ALLOWING MORE TIME CODING  + NEWER VERSIONS ARE BUGGY + ALL ARE EQUALLY EXPLOITABLE

code here:
https://pastes.io/3kiursfpce

install code blocks 
https://sourceforge.net/projects/codeblocks/files/Binaries/17.12/Windows/codeblocks-17.12mingw-setup.exe/download

set environment variables:
C:\Program Files (x86)\CodeBlocks\MinGW\bin

Download wxWidgets 2.8 windows version from site: https://github.com/wxWidgets/wxWidgets/releases/download/v2.8.12/wxMSW-2.8.12-Setup.exe
Run it extract to C:\
cd C:\wxWidgets-2.8.12\build\msw

mingw32-make -f makefile.gcc BUILD=release SHARED=0 MONOLITHIC=1 UNICODE=1 CXXfLAGS="-fno-keep-inline-dllexport"

/*******************************************************************************
	Generated by: DLL to C version 3.18
	Date: 2019-3-2
	Description: The implementation code for air.dll.
	Website: http://www.dll-decompiler.com
	Technical Support: support@dll-decompiler.com
*******************************************************************************/

#include "stdafx.h"
#include "Air.h"


HMODULE g_hAir;
BOOL (WINAPI *Air_DllEntryPoint)(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);

void* __stdcall Air_RVA(DWORD rvaAddr)
{
	if(rvaAddr==0)
		return g_hAir;
	if(rvaAddr >= 0x1000 && rvaAddr < 0x11000)
		return &Air_textbss[rvaAddr - 0x1000];
	if(rvaAddr >= 0x11000 && rvaAddr < 0x19000)
		return &Air_text[rvaAddr - 0x11000];
	if(rvaAddr >= 0x19000 && rvaAddr < 0x1C000)
		return &Air_rdata[rvaAddr - 0x19000];
	if(rvaAddr >= 0x1C000 && rvaAddr < 0x1D000)
		return &Air_data[rvaAddr - 0x1C000];
	if(rvaAddr >= 0x1D000 && rvaAddr < 0x1E000)
		return &Air_idata[rvaAddr - 0x1D000];
	if(rvaAddr >= 0x1E000 && rvaAddr < 0x1F000)
		return &Air_msvcjmc[rvaAddr - 0x1E000];
	if(rvaAddr >= 0x1F000 && rvaAddr < 0x20000)
		return &Air_00cfg[rvaAddr - 0x1F000];
	if(rvaAddr > 0 && rvaAddr < 0x1000)
		return (UCHAR*)g_hAir + rvaAddr;

	return NULL;
}

BOOL Air_Init()
{
	HMODULE hDll;
	DWORD oldProtect;
	void (*fInitData)(void*);

	g_hAir = GetModuleHandle(0);

	oldProtect = PAGE_EXECUTE_READWRITE;
	VirtualProtect(Air_text,sizeof(Air_text),PAGE_EXECUTE_READWRITE,&oldProtect);

	hDll = ::LoadLibraryA("KERNEL32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D000) = ::GetProcAddress(hDll,"Sleep");
	if(!*(FARPROC*)Air_RVA(0x1D000))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D004) = ::GetProcAddress(hDll,"FreeLibrary");
	if(!*(FARPROC*)Air_RVA(0x1D004))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D008) = ::GetProcAddress(hDll,"VirtualQuery");
	if(!*(FARPROC*)Air_RVA(0x1D008))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D00C) = ::GetProcAddress(hDll,"GetProcessHeap");
	if(!*(FARPROC*)Air_RVA(0x1D00C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D010) = ::GetProcAddress(hDll,"HeapFree");
	if(!*(FARPROC*)Air_RVA(0x1D010))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D014) = ::GetProcAddress(hDll,"HeapAlloc");
	if(!*(FARPROC*)Air_RVA(0x1D014))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D018) = ::GetProcAddress(hDll,"GetLastError");
	if(!*(FARPROC*)Air_RVA(0x1D018))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D01C) = ::GetProcAddress(hDll,"GetModuleHandleW");
	if(!*(FARPROC*)Air_RVA(0x1D01C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D020) = ::GetProcAddress(hDll,"GetStartupInfoW");
	if(!*(FARPROC*)Air_RVA(0x1D020))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D024) = ::GetProcAddress(hDll,"InitializeSListHead");
	if(!*(FARPROC*)Air_RVA(0x1D024))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D028) = ::GetProcAddress(hDll,"GetSystemTimeAsFileTime");
	if(!*(FARPROC*)Air_RVA(0x1D028))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D02C) = ::GetProcAddress(hDll,"GetCurrentProcessId");
	if(!*(FARPROC*)Air_RVA(0x1D02C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D030) = ::GetProcAddress(hDll,"QueryPerformanceCounter");
	if(!*(FARPROC*)Air_RVA(0x1D030))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D034) = ::GetProcAddress(hDll,"IsProcessorFeaturePresent");
	if(!*(FARPROC*)Air_RVA(0x1D034))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D038) = ::GetProcAddress(hDll,"TerminateProcess");
	if(!*(FARPROC*)Air_RVA(0x1D038))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D03C) = ::GetProcAddress(hDll,"GetCurrentProcess");
	if(!*(FARPROC*)Air_RVA(0x1D03C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D040) = ::GetProcAddress(hDll,"SetUnhandledExceptionFilter");
	if(!*(FARPROC*)Air_RVA(0x1D040))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D044) = ::GetProcAddress(hDll,"UnhandledExceptionFilter");
	if(!*(FARPROC*)Air_RVA(0x1D044))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D048) = ::GetProcAddress(hDll,"WideCharToMultiByte");
	if(!*(FARPROC*)Air_RVA(0x1D048))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D04C) = ::GetProcAddress(hDll,"MultiByteToWideChar");
	if(!*(FARPROC*)Air_RVA(0x1D04C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D050) = ::GetProcAddress(hDll,"RaiseException");
	if(!*(FARPROC*)Air_RVA(0x1D050))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D054) = ::GetProcAddress(hDll,"IsDebuggerPresent");
	if(!*(FARPROC*)Air_RVA(0x1D054))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D058) = ::GetProcAddress(hDll,"GetCurrentThreadId");
	if(!*(FARPROC*)Air_RVA(0x1D058))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D05C) = ::GetProcAddress(hDll,"GetProcAddress");
	if(!*(FARPROC*)Air_RVA(0x1D05C))
		return FALSE;

	hDll = ::LoadLibraryA("MSVCP140D.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D09C) = ::GetProcAddress(hDll,"?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A");
	if(!*(FARPROC*)Air_RVA(0x1D09C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0A0) = ::GetProcAddress(hDll,"?cin@std@@3V?$basic_istream@DU?$char_traits@D@std@@@1@A");
	if(!*(FARPROC*)Air_RVA(0x1D0A0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0A4) = ::GetProcAddress(hDll,"??5?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV01@AAH@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0A4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0A8) = ::GetProcAddress(hDll,"?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ");
	if(!*(FARPROC*)Air_RVA(0x1D0A8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0AC) = ::GetProcAddress(hDll,"?put@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@D@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0AC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0B0) = ::GetProcAddress(hDll,"?good@ios_base@std@@QBE_NXZ");
	if(!*(FARPROC*)Air_RVA(0x1D0B0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0B4) = ::GetProcAddress(hDll,"?flags@ios_base@std@@QBEHXZ");
	if(!*(FARPROC*)Air_RVA(0x1D0B4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0B8) = ::GetProcAddress(hDll,"?width@ios_base@std@@QBE_JXZ");
	if(!*(FARPROC*)Air_RVA(0x1D0B8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0BC) = ::GetProcAddress(hDll,"?width@ios_base@std@@QAE_J_J@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0BC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0C0) = ::GetProcAddress(hDll,"?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0C0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0C4) = ::GetProcAddress(hDll,"?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0C4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0C8) = ::GetProcAddress(hDll,"?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0C8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0CC) = ::GetProcAddress(hDll,"?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ");
	if(!*(FARPROC*)Air_RVA(0x1D0CC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0D0) = ::GetProcAddress(hDll,"?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ");
	if(!*(FARPROC*)Air_RVA(0x1D0D0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0D4) = ::GetProcAddress(hDll,"?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ");
	if(!*(FARPROC*)Air_RVA(0x1D0D4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0D8) = ::GetProcAddress(hDll,"?widen@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDD@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0D8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0DC) = ::GetProcAddress(hDll,"??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0DC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0E0) = ::GetProcAddress(hDll,"?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ");
	if(!*(FARPROC*)Air_RVA(0x1D0E0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0E4) = ::GetProcAddress(hDll,"??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z");
	if(!*(FARPROC*)Air_RVA(0x1D0E4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D0E8) = ::GetProcAddress(hDll,"?uncaught_exception@std@@YA_NXZ");
	if(!*(FARPROC*)Air_RVA(0x1D0E8))
		return FALSE;

	hDll = ::LoadLibraryA("VCRUNTIME140D.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D128) = ::GetProcAddress(hDll,"__vcrt_GetModuleFileNameW");
	if(!*(FARPROC*)Air_RVA(0x1D128))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D12C) = ::GetProcAddress(hDll,"_except_handler4_common");
	if(!*(FARPROC*)Air_RVA(0x1D12C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D130) = ::GetProcAddress(hDll,"memset");
	if(!*(FARPROC*)Air_RVA(0x1D130))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D134) = ::GetProcAddress(hDll,"__vcrt_GetModuleHandleW");
	if(!*(FARPROC*)Air_RVA(0x1D134))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D138) = ::GetProcAddress(hDll,"__vcrt_LoadLibraryExW");
	if(!*(FARPROC*)Air_RVA(0x1D138))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D13C) = ::GetProcAddress(hDll,"__CxxFrameHandler3");
	if(!*(FARPROC*)Air_RVA(0x1D13C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D140) = ::GetProcAddress(hDll,"__std_type_info_destroy_list");
	if(!*(FARPROC*)Air_RVA(0x1D140))
		return FALSE;

	hDll = ::LoadLibraryA("ucrtbased.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D174) = ::GetProcAddress(hDll,"_cexit");
	if(!*(FARPROC*)Air_RVA(0x1D174))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D178) = ::GetProcAddress(hDll,"terminate");
	if(!*(FARPROC*)Air_RVA(0x1D178))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D17C) = ::GetProcAddress(hDll,"_wmakepath_s");
	if(!*(FARPROC*)Air_RVA(0x1D17C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D180) = ::GetProcAddress(hDll,"_wsplitpath_s");
	if(!*(FARPROC*)Air_RVA(0x1D180))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D184) = ::GetProcAddress(hDll,"wcscpy_s");
	if(!*(FARPROC*)Air_RVA(0x1D184))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D188) = ::GetProcAddress(hDll,"_execute_onexit_table");
	if(!*(FARPROC*)Air_RVA(0x1D188))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D18C) = ::GetProcAddress(hDll,"_register_onexit_function");
	if(!*(FARPROC*)Air_RVA(0x1D18C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D190) = ::GetProcAddress(hDll,"_initialize_onexit_table");
	if(!*(FARPROC*)Air_RVA(0x1D190))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D194) = ::GetProcAddress(hDll,"_initialize_narrow_environment");
	if(!*(FARPROC*)Air_RVA(0x1D194))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D198) = ::GetProcAddress(hDll,"_configure_narrow_argv");
	if(!*(FARPROC*)Air_RVA(0x1D198))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D19C) = ::GetProcAddress(hDll,"_seh_filter_dll");
	if(!*(FARPROC*)Air_RVA(0x1D19C))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1A0) = ::GetProcAddress(hDll,"__stdio_common_vsprintf_s");
	if(!*(FARPROC*)Air_RVA(0x1D1A0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1A4) = ::GetProcAddress(hDll,"strcat_s");
	if(!*(FARPROC*)Air_RVA(0x1D1A4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1A8) = ::GetProcAddress(hDll,"strcpy_s");
	if(!*(FARPROC*)Air_RVA(0x1D1A8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1AC) = ::GetProcAddress(hDll,"_initterm_e");
	if(!*(FARPROC*)Air_RVA(0x1D1AC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1B0) = ::GetProcAddress(hDll,"_CrtDbgReportW");
	if(!*(FARPROC*)Air_RVA(0x1D1B0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1B4) = ::GetProcAddress(hDll,"_CrtDbgReport");
	if(!*(FARPROC*)Air_RVA(0x1D1B4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1B8) = ::GetProcAddress(hDll,"fopen");
	if(!*(FARPROC*)Air_RVA(0x1D1B8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1BC) = ::GetProcAddress(hDll,"fgets");
	if(!*(FARPROC*)Air_RVA(0x1D1BC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1C0) = ::GetProcAddress(hDll,"__acrt_iob_func");
	if(!*(FARPROC*)Air_RVA(0x1D1C0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1C4) = ::GetProcAddress(hDll,"system");
	if(!*(FARPROC*)Air_RVA(0x1D1C4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1C8) = ::GetProcAddress(hDll,"exit");
	if(!*(FARPROC*)Air_RVA(0x1D1C8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1CC) = ::GetProcAddress(hDll,"strlen");
	if(!*(FARPROC*)Air_RVA(0x1D1CC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1D0) = ::GetProcAddress(hDll,"strcpy");
	if(!*(FARPROC*)Air_RVA(0x1D1D0))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1D4) = ::GetProcAddress(hDll,"strcmp");
	if(!*(FARPROC*)Air_RVA(0x1D1D4))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1D8) = ::GetProcAddress(hDll,"_crt_at_quick_exit");
	if(!*(FARPROC*)Air_RVA(0x1D1D8))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1DC) = ::GetProcAddress(hDll,"_crt_atexit");
	if(!*(FARPROC*)Air_RVA(0x1D1DC))
		return FALSE;
	*(FARPROC*)Air_RVA(0x1D1E0) = ::GetProcAddress(hDll,"_initterm");
	if(!*(FARPROC*)Air_RVA(0x1D1E0))
		return FALSE;

	*(FARPROC*)&fInitData = (FARPROC)&Air_InitData[0];
	fInitData(Air_RVA);

	VirtualProtect(Air_text,sizeof(Air_text),oldProtect,&oldProtect);

	*(FARPROC*)&Air_DllEntryPoint = (FARPROC)Air_RVA(0x1123A);
	return TRUE;
}

BOOL Air_LoadLibrary()
{
	return Air_DllEntryPoint(g_hAir, DLL_PROCESS_ATTACH, 0);
}

BOOL Air_FreeLibrary()
{
	return Air_DllEntryPoint(g_hAir, DLL_PROCESS_DETACH, 0);
}

FARPROC Air_GetProcAddress(LPCSTR lpProcName)
{
	if(lstrcmpA(lpProcName,"file_loader")==0)
		return (FARPROC)&Air_text[0x1BD];
	if(lstrcmpA(lpProcName,"input_interactive")==0)
		return (FARPROC)&Air_text[0x28A];
	if(lstrcmpA(lpProcName,"mode_choose")==0)
		return (FARPROC)&Air_text[0x109];
	if(lstrcmpA(lpProcName,"process_check")==0)
		return (FARPROC)&Air_text[0x37];

	return NULL;
}

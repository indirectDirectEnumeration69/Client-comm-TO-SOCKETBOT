#pragma once
#include <filesystem>
namespace fs = std::filesystem;
#include <WinSock2.h>
#include <Windows.h>
#include <string>
#include <iostream>
#include <thread>
#include <array>
#include <direct.h>;
#include <sstream>;
#include <sstream>;
#include <Ws2tcpip.h>;
#include <tchar.h>;
#include <fstream>;
#include <intrin.h>;
#include <map>;
#include <filesystem>;
#include <algorithm>;
#include <vector>;
#include <string.h>;
#include <string>;
#include <unordered_set>
#pragma comment(lib,"ws2_32.lib")
using namespace std;
//look at registry values
auto HKeyLocalMachine(HKEY Hkey, LPCSTR SubKey, LPCSTR ValueName, DWORD Type, LPBYTE Data, DWORD DataSize) {
	
	if (RegOpenKeyEx(Hkey, (LPCWSTR)SubKey, 0, KEY_ALL_ACCESS, &Hkey) == ERROR_SUCCESS) {
		RegSetValueEx(Hkey, (LPCWSTR)ValueName, 0, Type, Data, DataSize);
		auto gainKey = RegQueryValueEx(Hkey, (LPCWSTR)ValueName, 0, &Type, Data, &DataSize);//use later
			RegCloseKey(Hkey);
		}
	else {
		RegCreateKeyEx(Hkey, (LPCWSTR) SubKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &Hkey, NULL);
		RegSetValueEx(Hkey, (LPCWSTR) ValueName, 0, Type, Data, DataSize);
		RegCloseKey(Hkey);
	}
	
	//RegQueryValue(Hkey, (LPCWSTR)ValueName, (LPWSTR)Data, (PLONG) & DataSize);
}
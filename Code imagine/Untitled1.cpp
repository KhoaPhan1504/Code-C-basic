#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h" 
using namespace std;

//V�o trang wed : https://www.ascii-art-generator.org/ d? chuy?n ?nh sang file .txt


void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


int main()
{
	string ngiu;
	while (true)
	{
		system("cls");
		cout << endl << endl;
		cout << "\t\tNHAP NGAY / THANG / NAM SINH:  ";
		getline(cin, ngiu);
		if (ngiu == "01/01/2002")
		{
			cout << "\t\t---NHAP DUNG NGAY SINH NHAT !---" << endl <<endl;
			cout << "\t\tHAPPY BIRTHDAY TO YOU..." << endl;
			Sleep(1000);
			cout << "\t\tCHUC MAY CO MOT NGAY SINH NHAT DANG NHO..." << endl; Sleep(1000);
			cout << "\t\tCHUC MAY LUON XINH DEP VA HOC GIOI..." << endl; Sleep(1000);
			cout << "\t\tCHUC CO GIAO TUONG LAI  DAY TOT LUON DUOC HOC TRO YEU QUY..." << endl; Sleep(1000);
			cout << "\t\tCHUC MAY MO DUOC THEM NHIEU LOP DAY HON..." << endl; Sleep(1000);
			cout << "\t\tNHIEU $$$$$$$$$ NHE!..." << endl; Sleep(1000);
			cout << "\t\tAN IT THOI KEO BEO..." << endl; Sleep(1000);
			cout << "\t\tBOT THAN VAN DE..." << endl; Sleep(1000);
			cout << "\t\tBOT KHAU NGHIEP & TAO NGHIEP..." << endl; Sleep(1000);
			cout << "\t\t^-^ ^-^ ^-^ ^-^ ^-^ ^-^ ^-^ ^-^ ^-^ ^-^..." << endl; Sleep(1000);
			cout << "\t\tCHUC MUNG SINH NHAT!..." << endl << endl;

			vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			while(true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("D:/Code imagine/New folder/anh-1.txt", ios_base::in); //import file th� copy du?ng d?n r?i d?i \ th�nh \\ ho?c /
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(30); 
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

				ifstream file2;
				file2.open("D:/Code imagine/New folder/anh-2.txt", ios_base::in);
				string line2;
				while (getline(file2, line2)) {
					cout << line2 << endl;
					Sleep(30); 
				}
				file2.close();
				SetColor(A.at(i++ % A.size()));
				ifstream file3;
				file3.open("D:/Code imagine/New folder/anh-3.txt", ios_base::in);
				string line3;
				while (getline(file3, line3)) {
					cout << line3 << endl;
					Sleep(30); 
				}
				file3.close();


				SetColor(A.at(i++ % A.size()));
				ifstream file4;
				file4.open("D:/Code imagine/New folder/anh04.txt", ios_base::in);
				string line4;
				while (getline(file4, line4)) {
					cout << line4 << endl;
					Sleep(30); 
				}
				file4.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file5;
				file5.open("D:/Code imagine/New folder/anh-5.txt", ios_base::in);
				string line5;
				while (getline(file5, line5)) {
					cout << line5 << endl;
					Sleep(30); 
				}
				file5.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file6;
				file6.open("D:/Code imagine/New folder/anh-6.txt", ios_base::in);
				string line6;
				while (getline(file6, line6)) {
					cout << line6 << endl;
					Sleep(30); 
				}
				file6.close();
//
				SetColor(A.at(i++ % A.size()));
				ifstream file7;
				file7.open("D:/Code imagine/New folder/anh-7.txt", ios_base::in);
				string line7;
				while (getline(file7, line7)) {
					cout << line7 << endl;
					Sleep(30); 
				}
				file7.close();
//
//				SetColor(A.at(i++ % A.size()));
//				ifstream file8;
//				file8.open("E:/8.txt", ios_base::in);
//				string line8;
//				while (getline(file8, line8)) {
//					cout << line8 << endl;
//					Sleep(30); 
//				}
//				file8.close();
//
//				SetColor(A.at(i++ % A.size()));
//				ifstream file9;
//				file9.open("E:/9.txt", ios_base::in);
//				string line9;
//				while (getline(file9, line9)) {
//					cout << line9 << endl;
//					Sleep(30); 
//				}
//				file9.close();
				system("pause");
				
			}
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI ;((" << endl << endl;
			system("pause");
		}
	}
}

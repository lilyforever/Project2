////#include <Windows.h>
////#include <string>
////using namespace std;
////int main() {
////	int mapdata1[10][15] = {
////		18,18,18,17,18,18,18,18,18,18,18,55,55,55,18,
////		18,17,18,17,17,17,17,17,17,17,17,55,55,55,18,
////		18,17,17,17,17,17,18,18,17,17,17,55,55,55,18,
////		18,17,17,17,18,18,18,18,18,17,17,55,55,17,18,
////		18,17,17,18,22,23,23,23,24,18,17,21,21,17,18,
////		18,17,17,18,25,28,26,79,27,18,55,55,55,17,18,
////		18,17,17,18,18,10,72,12,17,18,55,55,17,68,18,
////		18,18,17,17,10,16,16,16,11,55,55,17,17,17,18,
////		18,18,17,17,77,16,16,16,16,21,21,17,17,17,18,
////		18,18,18,18,18,18,18,18,18,55,55,18,18,18,18
////	};
////	string s;
////	for (int i = 0; i < 10; i++) {
////		for (int j = 0; j < 15; j++) {
////			
////			s = std::to_string(i);
////			WritePrivateProfileString("mapdata1", , "Man", "D:\\IniFileName.ini");
////			
////		}
////	}
////}
//#include <fstream>
//#include <iostream>
//using namespace std;
//
////采用CPP模式写二进制文件
//void DataWrite_CPPMode()
//{
//	//准备数据
//	int mapdata1[10][15] = {
//		18,18,18,17,18,18,18,18,18,18,18,55,55,55,18,
//		18,17,18,17,17,17,17,17,17,17,17,55,55,55,18,
//		18,17,17,17,17,17,18,18,17,17,17,55,55,55,18,
//		18,17,17,17,18,18,18,18,18,17,17,55,55,17,18,
//		18,17,17,18,22,23,23,23,24,18,17,21,21,17,18,
//		18,17,17,18,25,28,26,79,27,18,55,55,55,17,18,
//		18,17,17,18,18,10,72,12,17,18,55,55,17,68,18,
//		18,18,17,17,10,16,16,16,11,55,55,17,17,17,18,
//		18,18,17,17,77,16,16,16,16,21,21,17,17,17,18,
//		18,18,18,18,18,18,18,18,18,55,55,18,18,18,18
//
//	};
//
//	int walldata1[10][15] = {
//		1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
//		1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1,
//		1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1,
//		1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1,
//		1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1,
//		1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
//		1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1,
//		1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
//		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
//	};
//
//	int triggerdata1[10][15] = {
//		0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 11, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//	};
//
//	int mapdata2[10][15] = {
//		0,0,1,2,2,2,2,2,2,2,2,1,0,0,0,
//		0,0,1,3,5,5,1,3,5,5,5,1,0,0,0,
//		0,0,1,80,82,4,1,80,4,4,4,1,0,0,0,
//		0,0,1,80,4,4,1,80,8,7,8,1,0,0,0,
//		0,0,1,80,4,4,5,81,4,4,4,1,0,0,0,
//		0,0,1,2,2,2,6,4,4,4,4,1,0,0,0,
//		0,0,1,3,5,5,81,4,4,4,4,1,0,0,0,
//		0,0,1,80,4,4,4,4,4,4,9,1,0,0,0,
//		0,0,1,2,2,2,2,6,2,2,2,1,0,0,0,
//		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
//	};
//
//	int walldata2[10][15] = {
//		1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
//		1,1,1,0,0,0,1,0,0,0,0,1,1,1,1,
//		1,1,1,0,0,0,1,0,0,0,0,1,1,1,1,
//		1,1,1,0,0,0,1,0,0,1,0,1,1,1,1,
//		1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,
//		1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,
//		0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,
//		0,1,1,0,0,0,0,0,0,0,1,1,1,1,1,
//		0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,
//		1,1,0,0,1,1,1,1,1,1,1,1,1,1,1
//	};
//
//	int triggerdata2[10][15] = {
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//	};
//
//	int mapdata3[10][15] = {
//		18,18,18,18,18,18,18,18,18,18,18,18,55,55,18,
//		18,17,17,17,17,17,17,17,17,17,17,17,55,55,18,
//		18,17,17,17,17,17,17,17,17,17,17,17,55,55,18,
//		18,17,17,17,17,17,17,17,17,17,17,55,55,55,18,
//		18,17,17,17,0,17,17,17,17,18,18,55,55,55,18,
//		18,17,17,17,17,17,17,17,17,18,18,55,55,55,18,
//		18,17,17,17,17,17,17,17,17,18,18,55,55,55,18,
//		18,17,17,17,17,17,17,17,17,18,18,55,55,55,18,
//		18,17,17,17,17,17,17,17,17,18,18,55,55,55,18,
//		18,18,18,17,18,18,18,18,18,18,18,55,55,55,18
//	};
//
//	int walldata3[10][15] = {
//		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
//		1,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
//		1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1,
//		1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1
//	};
//
//	int triggerdata3[10][15] = {
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
//	};
//	//写出数据
//	ofstream f("testconfig.dat", ios::binary);
//	if (!f)
//	{
//		cout << "创建文件失败" << endl;
//		return;
//	}
//	int maptotal[1] = { 3 };
//	int portaldata1[10] = { 1,2, };
//	int portaldata2[10] = { 0 };
//	int portaldata3[10] = { 0 };
//	int monster[10][10] = { 0 };
//	monster[1][0] = 0;
//	monster[1][1] = 1;
//	f.write((char*)maptotal, sizeof(int));
//	f.write((char*)mapdata1, 150 * sizeof(int));
//	f.write((char*)walldata1, 150 * sizeof(int));
//	f.write((char*)triggerdata1, 150 * sizeof(int));
//	f.write((char*)portaldata1, 10 * sizeof(int));
//	f.write((char*)mapdata2, 150 * sizeof(int));
//	f.write((char*)walldata2, 150 * sizeof(int));
//	f.write((char*)triggerdata2, 150 * sizeof(int));
//	f.write((char*)portaldata2, 10 * sizeof(int));
//	f.write((char*)mapdata3, 150 * sizeof(int));
//	f.write((char*)walldata3, 150 * sizeof(int));
//	f.write((char*)triggerdata3, 150 * sizeof(int));
//	f.write((char*)portaldata3, 10 * sizeof(int));
//	f.write((char*)monster, 100 * sizeof(int));
//	f.close();
//}
//
//struct Mapdata {
//	int mapdata[10][15];
//	int walldata[10][15];
//	int triggerdata[10][15];
//};
//
//Mapdata mapdata[10];
//int maptotal[1];
//
////采用CPP模式读二进制文件
//void DataRead_CPPMode()
//{
//	ifstream f("textconfig.dat", ios::binary);
//	f.read((char*)maptotal, sizeof(int));
//	for (int i = 0; i < maptotal[0]; i++) {
//		f.read((char*)mapdata[i].mapdata, 150 * sizeof(int));
//		f.read((char*)mapdata[i].walldata, 150 * sizeof(int));
//		f.read((char*)mapdata[i].triggerdata, 150 * sizeof(int));
//		for (int k = 0; k < 10; k++) {
//			for (int j = 0; j < 15; j++) {
//				cout << mapdata[i].mapdata[k][j] << " ";
//			}
//			cout << endl;
//		}
//		for (int k = 0; k < 10; k++) {
//			for (int j = 0; j < 15; j++) {
//				cout << mapdata[i].walldata[k][j] << " ";
//			}
//			cout << endl;
//		}
//		for (int k = 0; k < 10; k++) {
//			for (int j = 0; j < 15; j++) {
//				cout << mapdata[i].triggerdata[k][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	
//	f.close();
//
//}
//
//int main() {
//	DataWrite_CPPMode();
//	//DataRead_CPPMode();
//	system("pause");
//	return 0;
//}
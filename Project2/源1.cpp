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
//	
//	//写出数据
//	ofstream f("next.dat", ios::binary);
//	if (!f)
//	{
//		cout << "创建文件失败" << endl;
//		return;
//	}
//	int portaldata1[10] = { 1,2, };
//	int portaldata2[10] = { 0 };
//	int portaldata3[10] = { 0 };
//	f.write((char*)portaldata1, 10 * sizeof(int));
//	f.write((char*)portaldata2, 10 * sizeof(int));
//	f.write((char*)portaldata3, 10 * sizeof(int));
//	f.close();
//}
//
//struct Mapdata {
//	int mapdata[10][15];
//	int walldata[10][15];
//	int triggerdata[10][15];
//	int next[10];
//};
//
//Mapdata mapdata[10];
//
////采用CPP模式读二进制文件
//void DataRead_CPPMode()
//{
//	ifstream f("next.dat", ios::binary);
//	for (int i = 0; i < 3; i++) {
//		f.read((char*)mapdata[i].next, 10 * sizeof(int));
//		for (int k = 0; k < 10; k++) {
//			cout << mapdata[i].next[k] << " ";
//			
//
//		}			cout << endl;
//	}
//
//	f.close();
//
//}
//
//int main() {
//	DataWrite_CPPMode();
//	DataRead_CPPMode();
//	system("pause");
//	return 0;
//}
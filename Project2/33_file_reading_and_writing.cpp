///*This source code copyrighted by Lazy Foo' Productions (2004-2015)
//and may not be redistributed without written permission.*/
//
////Using SDL, SDL_image, SDL_ttf, standard IO, strings, and string streams
//#include <SDL.h>
//#include <SDL_image.h>
//#include <SDL_ttf.h>
//#include <stdio.h>
//#include <string>
//#include <fstream>
//#include <iostream>
//#include <vector>
//using namespace std;
////struct Talkdata {
////	int state[3] = { 0 };
////	string content = "null";
////};
////Talkdata t[10];
////void loaddata() {
////	SDL_RWops* file = SDL_RWFromFile("testsave.bin", "r+b");
////	if (file != NULL) {
////		SDL_RWread(file, &t[0], sizeof(t[0]), 1);
////		SDL_RWread(file, &t[1], sizeof(t[1]), 1);
////		SDL_RWread(file, &t[2], sizeof(t[2]), 1);
////	}
////}
////void savedata() {
////	t[1].content = "aaa";
////	t[2].content = "xin";
////	SDL_RWops* file = SDL_RWFromFile("testsave.bin", "w+b");
////	if (file != NULL) {
////		SDL_RWwrite(file, &t[0], sizeof(t[0]), 1);
////		SDL_RWwrite(file, &t[1], sizeof(t[1]), 1);
////		SDL_RWwrite(file, &t[2], sizeof(t[2]), 1);
////	}
////}
////int main(int argc, char* argv[]) {
////	loaddata();
////	cout << t[1].content << endl;
////	cout << sizeof(t[1]) << endl;
////	cout << sizeof(t[0]) << endl;
////	system("pause");
////	savedata();
////	return 0;
////}
//int main(int argc, char* argv[]) {
//	ofstream outfile("out.txt");
//	string temp[10][10][2];
//	temp[0][0][0] = "you are too weak!";
//	temp[0][0][1] = "be stronger plzzz";
//	temp[2][0][0] = "hello, adventure!";
//	temp[2][0][1] = "can you disappear the stone?";
//	temp[2][1][0] = "ok, i will help you~";
//	temp[2][1][1] = "the stone has been disappeared!";
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			for (int k = 0; k < 2; k++) {
//				outfile << temp[i][j][k] << endl;
//			}
//		}
//	}
//	cout << temp[1][1];
//	return 0;
//}
/*This source code copyrighted by Lazy Foo' Productions (2004-2015)
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, SDL_ttf, standard IO, strings, and string streams
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
using namespace std;
//struct Talkdata {
//	int state[3] = { 0 };
//	string content = "null";
//};
//Talkdata t[10];
//void loaddata() {
//	SDL_RWops* file = SDL_RWFromFile("testsave.bin", "r+b");
//	if (file != NULL) {
//		SDL_RWread(file, &t[0], sizeof(t[0]), 1);
//		SDL_RWread(file, &t[1], sizeof(t[1]), 1);
//		SDL_RWread(file, &t[2], sizeof(t[2]), 1);
//	}
//}
//void savedata() {
//	t[1].content = "aaa";
//	t[2].content = "xin";
//	SDL_RWops* file = SDL_RWFromFile("testsave.bin", "w+b");
//	if (file != NULL) {
//		SDL_RWwrite(file, &t[0], sizeof(t[0]), 1);
//		SDL_RWwrite(file, &t[1], sizeof(t[1]), 1);
//		SDL_RWwrite(file, &t[2], sizeof(t[2]), 1);
//	}
//}
//int main(int argc, char* argv[]) {
//	loaddata();
//	cout << t[1].content << endl;
//	cout << sizeof(t[1]) << endl;
//	cout << sizeof(t[0]) << endl;
//	system("pause");
//	savedata();
//	return 0;
//}
int main(int argc, char* argv[]) {
	//WritePrivateProfileString("monster[0]", "atk", "1", "d:\\monster.ini");
	//WritePrivateProfileString("monster[0]", "pic", "slime.png", "d:\\monster.ini");
	//WritePrivateProfileString("monster[0]", "name", "slime", "d:\\monster.ini");
	//初始化SDL
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}

	//创建窗口
	SDL_Window *win = nullptr;
	win = SDL_CreateWindow("Hello World!",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		640, 480, SDL_WINDOW_SHOWN);
	if (win == nullptr)
	{
		std::cout << SDL_GetError() << std::endl;
		return 1;
	}

	//创建渲染器
	SDL_Renderer *ren = nullptr;
	ren = SDL_CreateRenderer(win, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (ren == nullptr)
	{
		std::cout << SDL_GetError() << std::endl;
		return 1;
	}

	//创建表面
	SDL_Surface *bmp = nullptr;
	ofstream outfile("out.txt");
	int atk[20] = { 0 };
	string pic[20];
	string name[20];
	int hp[20] = { 0 };
	atk[0] = 1;
	pic[0] = "slime.png";
	name[0] = "slime";
	hp[0] = 20;
	atk[1] = -1;
	pic[1] = "littlemonkey.png";
	name[1] = "littlemonkey";
	hp[1] = 30;
	outfile << 2 << endl;
	for (int i = 0; i < 20; i++) {
		outfile << i << endl;
		outfile << atk[i] << endl;
		outfile << pic[i] << endl;
		outfile << name[i] << endl;
		outfile << hp[i] << endl;
	}
	int fatk[20];
	string s[20][3];
	outfile.close();
	ifstream f("out.txt");
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 3; j++) {
			getline(f, s[i][j]);
			if (j == 0) {
				fatk[i] = atoi(s[i][j].c_str());
			}
		}
	}
	f.close();

	bmp = IMG_Load(s[0][2].c_str());
	if (bmp == nullptr) {
		std::cout << SDL_GetError() << std::endl;
		return 1;
	}

	//创建材质
	SDL_Texture *tex = nullptr;
	tex = SDL_CreateTextureFromSurface(ren, bmp);
	SDL_FreeSurface(bmp);

	//清空渲染器
	SDL_RenderClear(ren);
	//将材质复制到渲染器
	SDL_RenderCopy(ren, tex, NULL, NULL);
	//呈现渲染器
	SDL_RenderPresent(ren);
	//窗口延时
	SDL_Delay(2000);

	//释放资源
	SDL_DestroyTexture(tex);
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	//退出SDL
	SDL_Quit();
	return 0;
}
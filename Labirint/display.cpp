#include <Windows.h>
#include <iostream>
#include <conio.h>
extern int map1[100][100];
extern int mapoutput[11][7];
extern int playerx;
extern int playery;

int end = 0;
int end1 = 0;
int end2 = 0;
int end3 = 0;
int end4 = 0;



HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);//получение хэндла для изменения положения курсора

void SetColor(int text, int background) // смена цвета символов
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void fillmapoutput(int x, int y, int xend, int yend) {
	int xfill = 0; // вспомогательные переменные
	int yfill = 0;

	while (y + yfill <= yend) {
		while (x + xfill <= xend) {
			if (x + xfill >= 0 && x + xfill < 100 && y + yfill >= 0 && y + yfill < 100) {
				mapoutput[xfill][yfill] = map1[x + xfill][y + yfill];

			}
			else {
				mapoutput[xfill][yfill] = 0;
			}
			xfill++;
		}
		xfill = 0;
		yfill++;
	}
}

void display() {
	setlocale(LC_ALL, "Russian");
	short int dispx = 0;
	short int dispy = 0;
	fillmapoutput(playerx - 5, playery - 3, playerx + 5, playery + 3);

	mapoutput[5][3] = 2; // отображение игрока по середине


	while (dispy < 7) {
		while (dispx < 11) {
			if (mapoutput[dispx][dispy] == 0) {
				SetConsoleCursorPosition(hStdOut, { dispx * 2, dispy });//изменения положения курсора консоли
				SetColor(0, 0);
				std::cout << "##";

			}
			if (mapoutput[dispx][dispy] == 1) {//стена
				SetConsoleCursorPosition(hStdOut, { dispx * 2, dispy });
				SetColor(15, 15);
				std::cout << "##";
				SetColor(0, 0);
			}
			if (mapoutput[dispx][dispy] == 2) {//игрок
				SetConsoleCursorPosition(hStdOut, { dispx * 2, dispy });
				SetColor(1, 1);
				std::cout << "##";
				SetColor(0, 0);
			}

			dispx++;
		}





		dispx = 0;
		dispy++;
		SetConsoleCursorPosition(hStdOut, { 24, 0 });
		SetColor(15, 0);
		std::cout << playerx << " ";
		SetConsoleCursorPosition(hStdOut, { 24, 2 });
		std::cout << playery << " ";
		SetColor(0, 0);



		//Определенная точка в лабиринте выводит сообщение для игрока
		if (end1 == 0) {
			SetConsoleCursorPosition(hStdOut, { 0, 8 });
			SetColor(15, 0);
			std::cout << "Сложные коридоры... Всё уже определено";//само сообщение
			SetColor(0, 0);
			end1 = 1;
		}

		if (playerx == 43 && playery == 59 && end2 == 0) {// ghjkknhukuj
			SetConsoleCursorPosition(hStdOut, { 0, 9 });
			SetColor(15, 0);
			std::cout << "Простой выбор, но это лишь обман";
			SetColor(0, 0);
			end2 = 1;
		}
		if (playerx == 3 && playery == 59 && end3 == 0) {
			SetConsoleCursorPosition(hStdOut, { 0, 10 });
			SetColor(15, 0);
			std::cout << "Прямой путь лишь облегчал участь ... End";
			SetColor(0, 0);
			end3 = 1;
			end = 1;
		}
		if (playerx == 97 && playery == 97 && end4 == 0) {
			SetConsoleCursorPosition(hStdOut, { 0, 10 });
			SetColor(15, 0);
			std::cout << "Конец был неизбежен. End";
			SetColor(0, 0);
			end4 = 1;
			end = 1;
		}



	}
}
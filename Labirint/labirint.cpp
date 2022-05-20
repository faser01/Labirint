
#include <iostream>
#include <fstream>
#include "display.h"
#include "keyboard.h"
#include "map.h"
#include <Windows.h>
#include <string.h>
int map1[100][100];
int mapoutput[11][7];
int playerx = 15;
int playery = 9;
int money = 0;
int steps = 0;
int hard = 0;
extern int end;

int main()
{
    setlocale(LC_ALL, "Russian");
    map1[0][0] = 1;
    map1[10][6] = 1;
    level1();
    std::cout << "Справка:" << std::endl;
    std::cout << "Управление W A S D, сохранение прогресса TAB" << std::endl;
    std::cout << "Цена открытия ворот (##) 500$" << std::endl << std::endl;
    std::cout << "Выбери сложность:" << std::endl;
    std::cout << "Легко (0)" << std::endl;
    std::cout << "Средне (1)" << std::endl;
    std::cout << "Тяжело (2)" << std::endl;
    std::cout << "Нереально (3)" << std::endl;
    std::cout << "Загрузить прошлую игру(4)" << std::endl;
    std::cin >> hard;// ввод от пользователя
    system("cls");

    if (hard == 0) {// уровни
        steps = 2500;
    }
    if (hard == 1) {
        steps = 1500;
    }
    if (hard == 2) {
        steps = 900;
    }
    if (hard == 3) {
        steps = 5;
    }
    // запись прогресса в файл
    if (hard == 4) {
        std::string buff;
        std::ifstream fload("savel.txt");
        fload >> buff;
        playerx = atoi(buff.c_str());
        fload >> buff;
        playery = atoi(buff.c_str());
        fload >> buff;
        steps = atoi(buff.c_str());
        fload.close();
    }
    while (true) {

        if (end == 0) {
            keyboard();
        }
        update();
        display();
        Sleep(100);
    }

}

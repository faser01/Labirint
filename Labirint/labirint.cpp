
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
    std::cout << "�������:" << std::endl;
    std::cout << "���������� W A S D, ���������� ��������� TAB" << std::endl;
    std::cout << "���� �������� ����� (##) 500$" << std::endl << std::endl;
    std::cout << "������ ���������:" << std::endl;
    std::cout << "����� (0)" << std::endl;
    std::cout << "������ (1)" << std::endl;
    std::cout << "������ (2)" << std::endl;
    std::cout << "��������� (3)" << std::endl;
    std::cout << "��������� ������� ����(4)" << std::endl;
    std::cin >> hard;// ���� �� ������������
    system("cls");

    if (hard == 0) {// ������
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
    // ������ ��������� � ����
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

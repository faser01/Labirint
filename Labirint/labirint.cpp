#include <iostream>
#include "display.h"
#include "keyboard.h"
#include "map.h"
#include <Windows.h>
int map1[100][100];
int mapoutput[11][7];
int playerx = 15;
int playery = 9;
extern int end;

int main()
{
    map1[0][0] = 1;
    map1[10][6] = 1;
    level1();
    while (true) {

        if (end == 0) {
            keyboard();
        }
        display();
        Sleep(100);
    }

}
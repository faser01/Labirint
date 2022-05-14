#include <Windows.h>
#include <conio.h>
extern int map1[100][100];
extern int playerx;
extern int playery;

char foundkey(int key) {// управление клавишами
    char keychar = ' ';

    if ((key == 87 || key == 119 || key == 230 || key == 150)) {
        keychar = 'w';
    }
    if ((key == 115 || key == 83 || key == 155 || key == 235)) {
        keychar = 's';
    }
    if ((key == 228 || key == 148 || key == 97 || key == 65)) {
        keychar = 'a';
    }
    if ((key == 130 || key == 162 || key == 100 || key == 68)) {
        keychar = 'd';
    }
    return keychar;
}

void keyboard() {
    int button = 0;
    if (_kbhit())//если нажата клавиша
    {
        button = _getch();

        if (foundkey(button) == 'w' && map1[playerx][playery - 1] == 0) {
            playery--;
        }
        if (foundkey(button) == 's' && map1[playerx][playery + 1] == 0) {
            playery++;
        }
        if (foundkey(button) == 'a' && map1[playerx - 1][playery] == 0) {
            playerx--;
        }
        if (foundkey(button) == 'd' && map1[playerx + 1][playery] == 0) {
            playerx++;
        }
    }

}
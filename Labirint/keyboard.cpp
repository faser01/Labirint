#include <Windows.h>
#include <conio.h>
#include <fstream>

extern int map1[100][100];
extern int playerx;
extern int playery;

extern int map1[100][100];
extern int playerx;
extern int playery;
extern int steps;

char foundkey(int key) {
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
    if (key == 9) {
        keychar = 'T';
    }
    return keychar;
}

void keyboard() {
    int button = 0;
    if (_kbhit())//???? ?????? ???????
    {
        button = _getch();// 

        if (foundkey(button) == 'w' && (map1[playerx][playery - 1] == 0 || map1[playerx][playery - 1] == 3)) {
            playery--;
            steps--;
        }
        if (foundkey(button) == 's' && (map1[playerx][playery + 1] == 0 || map1[playerx][playery + 1] == 3)) {
            playery++;
            steps--;
        }
        if (foundkey(button) == 'a' && (map1[playerx - 1][playery] == 0 || map1[playerx - 1][playery] == 3)) {
            playerx--;
            steps--;
        }
        if (foundkey(button) == 'd' && (map1[playerx + 1][playery] == 0 || map1[playerx + 1][playery] == 3)) {
            playerx++;
            steps--;
        }
        if (foundkey(button) == 'T') {

            std::ofstream fout("savel.txt");
            fout << playerx << std::endl;
            fout << playery << std::endl;
            fout << steps;
            fout.close();

        }
    }

}

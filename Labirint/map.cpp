extern int map1[100][100];
extern int playerx;
extern int playery;
extern int money;
void fllx(int x, int y, int xend) { //для быстрого заполнения массива
	int fx = x;
	while (fx < xend + 1) {


		map1[fx][y] = 1;
		fx++;
	}
}
void flly(int x, int y, int yend) { //для быстрого заполнения массива
	int fy = y;
	while (fy < yend + 1) {


		map1[x][fy] = 1;
		fy++;
	}
}
void level1() {
	int x = 0;//вспомогательные переменные 
	int y = 0;
	while (y < 100) {
		while (x < 100) {

			if (((y == 0 || y == 99) && x >= 0 && x < 100) || ((x == 0 || x == 99) && y > 0 && y < 100)) {
				map1[x][y] = 1;
			}

			x++;
		}
		x = 0;
		y++;
	}

	//карта прорисована сначала в paint затем вручную прописана

	fllx(10, 10, 14);
	flly(10, 7, 13);
	fllx(10, 13, 14);
	flly(14, 1, 8);
	fllx(14, 1, 23);
	flly(16, 1, 6);
	fllx(16, 8, 23);
	flly(22, 3, 8);
	flly(23, 3, 8);
	fllx(16, 10, 26);
	fllx(23, 11, 26);
	fllx(16, 12, 21);
	flly(21, 12, 15);
	flly(16, 14, 18);
	flly(17, 14, 18);
	flly(19, 14, 18);
	fllx(19, 17, 28);
	fllx(19, 18, 28);
	flly(14, 10, 13);
	flly(12, 1, 8);
	fllx(12, 8, 14);
	fllx(8, 7, 10);
	fllx(8, 8, 10);
	flly(8, 7, 15);
	fllx(16, 6, 18);
	fllx(16, 4, 18);
	flly(18, 4, 6);
	fllx(6, 15, 10);
	flly(6, 15, 18);
	flly(10, 15, 18);
	fllx(4, 18, 10);
	flly(20, 1, 6);
	fllx(18, 2, 19);
	flly(25, 5, 9);
	flly(26, 5, 9);
	fllx(25, 2, 30);
	fllx(25, 3, 30);
	flly(28, 2, 12);
	fllx(23, 13, 26);
	flly(23, 13, 15);
	fllx(23, 15, 26);
	flly(26, 13, 15);
	flly(12, 15, 18);
	fllx(12, 15, 14);
	flly(14, 15, 18);
	fllx(12, 18, 14);
	flly(2, 11, 21);
	fllx(2, 11, 6);
	fllx(2, 16, 4);
	flly(4, 13, 16);
	fllx(4, 13, 6);
	flly(6, 11, 13);
	fllx(2, 20, 5);
	fllx(2, 21, 5);
	fllx(1, 2, 6);
	flly(1, 2, 6);
	fllx(6, 1, 8);
	flly(8, 1, 2);
	fllx(8, 2, 10);
	flly(10, 1, 2);
	fllx(8, 4, 10);
	fllx(8, 5, 10);
	fllx(5, 4, 6);
	fllx(5, 5, 6);
	flly(3, 4, 7);
	fllx(3, 7, 6);
	flly(6, 7, 9);
	flly(2, 8, 9);
	fllx(2, 9, 6);
	flly(7, 20, 24);
	fllx(7, 20, 10);
	flly(10, 20, 24);
	fllx(12, 20, 14);
	fllx(12, 21, 14);
	flly(16, 20, 24);
	fllx(16, 20, 24);
	flly(24, 20, 24);
	fllx(26, 20, 31);
	fllx(26, 21, 31);
	flly(30, 18, 21);
	flly(31, 18, 21);
	flly(28, 14, 16);
	flly(29, 14, 16);
	fllx(28, 16, 33);
	flly(32, 1, 5);
	fllx(32, 3, 36);
	fllx(32, 5, 36);
	fllx(32, 14, 35);
	flly(35, 12, 18);
	fllx(32, 7, 36);
	flly(37, 14, 20);
	fllx(1, 23, 31);
	fllx(1, 24, 51);
	flly(50, 9, 24);
	flly(51, 5, 24);
	flly(30, 5, 16);
	flly(32, 7, 14);
	flly(36, 3, 12);
	fllx(32, 1, 38);
	flly(38, 1, 12);
	flly(33, 16, 22);
	fllx(33, 20, 44);
	fllx(33, 22, 48);
	flly(48, 11, 22);
	fllx(38, 10, 44);
	flly(44, 10, 18);
	fllx(39, 18, 44);
	flly(46, 9, 20);
	fllx(46, 9, 51);
	flly(40, 1, 8);
	fllx(38, 8, 40);
	flly(42, 1, 8);
	flly(43, 3, 8);
	fllx(42, 3, 51);
	flly(51, 1, 3);
	flly(45, 5, 8);
	fllx(45, 5, 51);
	fllx(52, 3, 57);
	fllx(52, 5, 55);
	flly(55, 5, 26);
	flly(57, 3, 54);
	flly(55, 28, 54);
	fllx(55, 53, 57);
	flly(59, 1, 54);
	flly(61, 1, 57);
	fllx(2, 26, 55);
	flly(2, 26, 57);
	fllx(1, 57, 42);
	fllx(4, 28, 26);
	fllx(4, 29, 22);
	fllx(4, 31, 22);
	flly(22, 28, 31);
	fllx(28, 28, 54);
	flly(26, 28, 46);
	flly(28, 28, 44);
	fllx(26, 46, 47);
	fllx(28, 44, 49);
	flly(47, 46, 49);
	fllx(16, 49, 47);
	flly(16, 37, 49);
	fllx(4, 55, 34);
	flly(34, 55, 57);
	fllx(14, 51, 42);
	flly(14, 37, 46);
	fllx(14, 37, 16);
	flly(4, 48, 55);
	fllx(4, 48, 14);
	flly(14, 48, 51);
	fllx(4, 46, 14);
	flly(4, 32, 34);
	fllx(4, 34, 10);
	flly(10, 34, 36);
	fllx(4, 36, 10);
	flly(4, 36, 39);
	fllx(4, 39, 11);
	flly(11, 39, 41);
	fllx(4, 41, 11);
	flly(4, 41, 46);
	flly(49, 44, 49);
	flly(42, 51, 57);
	flly(44, 49, 57);
	fllx(44, 51, 49);
	fllx(44, 57, 61);
	fllx(51, 54, 61);
	fllx(49, 49, 51);
	flly(51, 49, 54);
	flly(49, 51, 57);
	fllx(49, 56, 61);


	fllx(2, 58, 42);
	fllx(44, 58, 65);
	flly(2, 58, 60);
	fllx(2, 60, 22);
	flly(22, 60, 90);
	fllx(22, 90, 42);
	flly(24, 60, 88);
	fllx(24, 88, 42);
	fllx(24, 60, 42);
	flly(42, 60, 88);
	flly(42, 90, 98);
	fllx(42, 98, 98);
	flly(98, 26, 98);
	flly(44, 60, 96);
	fllx(44, 60, 67);
	flly(65, 2, 58);
	fllx(44, 96, 96);
	flly(96, 28, 96);
	fllx(65, 2, 91);
	flly(67, 28, 60);
	flly(67, 4, 26);
	fllx(67, 4, 89);
	flly(91, 2, 26);
	flly(89, 4, 26);
	fllx(67, 28, 96);
	fllx(67, 26, 89);
	fllx(91, 26, 98);


	map1[13][9] = 3;
	map1[21][9] = 3;
	map1[18][18] = 3;
	map1[5][14] = 3;
	map1[40][12] = 3;

	map1[51][4] = 4;
	map1[43][57] = 4;

	map1[27][27] = 3;
	map1[9][35] = 3;
	map1[56][51] = 3;
	map1[15][38] = 3;
	map1[60][55] = 3;

	map1[91][27] = 1;
	map1[3][56] = 4;


	map1[4][56] = 3;
	map1[5][56] = 3;
	map1[6][56] = 3;
	map1[7][56] = 3;
	map1[8][56] = 3;
	map1[9][56] = 3;
	map1[10][56] = 3;
	map1[11][56] = 3;
	map1[12][56] = 3;
	map1[13][56] = 3;
	map1[14][56] = 3;

}
void update() {
	if (map1[playerx][playery] == 3) { 
		map1[playerx][playery] = 0;
		money += 100;
	}

	if (money >= 500) {
		if (map1[playerx + 1][playery] == 4) {
			map1[playerx + 1][playery] = 0;
			money -= 500;
		}
		if (map1[playerx - 1][playery] == 4) {
			map1[playerx - 1][playery] = 0;
			money -= 500;
		}
		if (map1[playerx][playery + 1] == 4) {
			map1[playerx][playery + 1] = 0;
			money -= 500;
		}
		if (map1[playerx][playery - 1] == 4) {
			map1[playerx][playery - 1] = 0;
			money -= 500;
		}

	}
}
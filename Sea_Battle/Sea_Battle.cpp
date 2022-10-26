#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Point {
	int x = 0;
	int y = 0;
};

void print(int board[10][10]) {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout.width(2);
			cout << board[i][j];
		}
		cout << endl;
	}
}

int main() {
	int board[10][10]{ 0 };
	cout << typeid(board).name() << endl;
	print(board);
	Point point = { 0, 0 };
	int counter = 0;
	while (counter < 20) {
		cin >> point.x >> point.y;
		board[point.x][point.y] = 1;
		print(board);
		++counter;
	}

	return 0;
}
#include<iostream>
using namespace std;

void swap(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	int x, y;

	cout << "first number >> ";
	cin >> x;
	cout << "second number >> ";
	cin >> y;

	cout << "\n swap �� >>" << x << " " << y << '\n';
	swap(x, y);
	cout << "\n swap �� >>" << x << " " << y << '\n';
}
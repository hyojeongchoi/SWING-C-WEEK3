#include<iostream>
using namespace std;

int max(int x, int y)
{
	int result = 0;
	if (x < y)
	{
		result = y;
		return result;
	}
	else 
	{
		result = x;
		return result;
	}

}
int min(int x, int y)
{
	int result;
	if (x >y)
	{
		result = y;
		return result;
	}
	else
	{
		result = x;
		return result;
	}
}

int main()
{
	int y = 0;
	int x = 0;
	cout << "�� ���� �Է��� �ּ��� (����� ����) >>";
	cin >> x>>y;

	cout << "ū �� >>" << max(x,y);
	cout << "���� �� >>" << min(x,y);
}
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
	cout << "두 수를 입력해 주세요 (띄어쓰기로 구분) >>";
	cin >> x>>y;

	cout << "큰 수 >>" << max(x,y);
	cout << "작은 수 >>" << min(x,y);
}
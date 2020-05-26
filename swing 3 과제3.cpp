#include <iostream>
using namespace std;

void sort(int* number, int size)
{
    int i = 0, j = 0, temp = 0;

    for (j = 0; j < size; j++)
    {
        for (i = 0; i < size - 1; i++)
        {
            if (number[i] > number[i + 1])
            {
                temp = number[i];
                number[i] = number[i + 1];
                number[i + 1] = temp;
            }
        }
    }
}


int main(void)
{
	int number[5];
	int i = 0;

	cout << "숫자 다섯개를 입력해주세요 (띄어쓰기로 구분) >>";
	for (int i = 0; i < 5; i++)
	{
		cin >> number[i];
	}
    cout << "< 정렬 전 >\n";
    for (int j = 0; j < 5; j++)
    {
        cout << j + 1 << ". " << number[j] << '\n';
    }
    cout << "\n";

    cout << "< 정렬 후 >\n";
    sort(number, 5);
    for (int j = 0; j < 5; j++)
    {
        cout << j + 1 << ". " << number[j] << '\n';
    }

}
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

void print(int* number, int size) 
{
    for (int j = 0; j < 5; j++)
    {
        cout << j + 1 << ". " << number[j] << '\n';
    }
}

int main(void)
{
	int number[5];
	int i = 0;

	cout << "���� �ټ����� �Է����ּ��� (����� ����) >>";
	for (int i = 0; i < 5; i++)
	{
		cin >> number[i];
	}
    cout << "< ���� �� >\n";
    print(number, 5);
    cout << "\n";

    cout << "< ���� �� >\n";
    sort(number, 5);
    print(number, 5);

}
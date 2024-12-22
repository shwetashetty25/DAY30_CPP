// 8.wap to declare an array of size 10, initialize it with the first 10 natural numbers, and print each elements on a new line
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = i + 1;
    }
    cout << "The first 10 natural numbers are:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}
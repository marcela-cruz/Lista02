// Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

#include <iostream>

using namespace std;

int main()
{
    cout << "Os impares entre 100 e 200 sao (usando for): " << endl;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << "Os impares entre 100 e 200 sao (usando do while): " << endl;
    int num = 101;
    do
    {
        cout << num << " ";
        num += 2;
    } while (num <= 199);

    cout << "Os impares entre 100 e 200 sao (usando while): " << endl;
    while (num <= 199)
    {
        cout << num << " ";
        num += 2;
    }

    return 0;
}
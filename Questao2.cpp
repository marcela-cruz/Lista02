// Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e
// calcule a tabuada de N. Mostre a tabuada na forma:
// 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Digite um valor de 1 a 10: ";
    cin >> n;

    int i = 0;
    do
    {
        int resultado = i * n;
        cout << i << " x " << n << " = " << resultado << endl;
        i++;
    } while (i <= 10);

    for (int i = 0; i <= 10; i++)
    {
        int resultado = i * n;
        cout << i << " x " << n << " = " << resultado << endl;
    }

    int i = 0;
    while (i <= 10)
    {
        int resultado = i * n;
        cout << i << " x " << n << " = " << resultado << endl;
        i++;
    }

    return 0;
}
// Escrever um algoritmo que receba a idade de dez pessoas e que calcule e
// mostre a quantidade de pessoas com idade maior ou igual a 18 anos.

#include <iostream>

using namespace std;

int main()
{

    int idade;
    int x = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite a idade da pessoa " << i << ": ";
        cin >> idade;

        if (idade >= 18)
        {
            x++;
        }
    }
    cout << "A quantidade de pessoas com idade maior ou igual a 18 anos e: " << x++ << endl;
    return 0;
}
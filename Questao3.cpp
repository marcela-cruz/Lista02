// Escreva um algoritmo que lê 15 valores reais, encontra o maior e o menor
// deles e mostra o resultado.

#include <iostream>

using namespace std;

int main()
{
    double valor;
    double maior = 0;
    double menor = 0;

    for (int i = 1; i <= 15; i++)
    {
        cout << "Digite o valor " << i << ": ";
        cin >> valor;

        if (i == 1)
        {
            maior = valor;
            menor = valor;
        }
        else
        {
            if (valor > maior)
            {
                maior = valor;
            }
            if (valor < menor)
            {
                menor = valor;
            }
        }
    }
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}
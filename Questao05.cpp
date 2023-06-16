// Escrever um algoritmo que receba a idade de 15 pessoas e que calcule e
// mostre:
// a) A quantidade de pessoas em cada faixa etária;
// b) A percentagem de pessoas na primeira e na última faixa etária, com
// relação ao total de pessoas:
// Até 15 anos
// De 16 a 30 anos
// De 31 a 45 anos
// De 46 a 60 anos
// Acima de 61 anos

#include <iostream>

using namespace std;

int main()
{
    int idade;
    int a; // Até 15 anos
    int b; // De 16 a 3o anos;
    int c; // De 31 a 45 anos;
    int d; // De 46 a 60 anos;
    int e; // Acima de 61 anos;

    for (int i = 1; i <= 15; i++)
    {
        cout << "Digite a idade da pessoa " << i << ": ";
        cin >> idade;

        if (idade <= 15)
        {
            a++;
        }
        else if (idade <= 30)
        {
            b++;
        }
        else if (idade <= 45)
        {
            c++;
        }
        else if (idade <= 60)
        {
            d++;
        }
        else
        {
            e++;
        }
    }

    int total_pessoas = 15;
    double porcentagem_primeira_faixa = (a / double(total_pessoas)) * 100;
    double porcentagem_ultima_faixa = (e / double(total_pessoas)) * 100;
    cout << "Quantidade de pessoas em cada faixa etaria:\n";
    cout << "Ate 15 anos: " << a << " pessoas\n";
    cout << "De 16 a 30 anos: " << b << " pessoas\n";
    cout << "De 31 a 45 anos: " << c << " pessoas\n";
    cout << "De 46 a 60 anos: " << d << " pessoas\n";
    cout << "Acima de 61 anos: " << e << " pessoas\n";

    cout << "\nPorcentagem de pessoas na primeira e ultima faixa etaria:\n";
    cout << "Primeira faixa (ate 15 anos): " << porcentagem_primeira_faixa << "%\n";
    cout << "Ultima faixa (acima de 61 anos): " << porcentagem_ultima_faixa << "%\n";

    return 0;
}
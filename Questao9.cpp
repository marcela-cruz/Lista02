// Escreva um algoritmo que leia números inteiros até que a soma de tais
// números totalize no mínimo 100. Devem ser lidos tantos valores quantos
// necessários para que tal valor seja atingido ou superado. Quando isto
// ocorrer, o algoritmo também deve exibir quantos números foram lidos e sua média.

#include <iostream>

using namespace std;

int main(){
int numero;
    int soma = 0;
    int quantidade = 0;

    while (soma < 100)
    {
        cout << "Digite um numero: ";
        cin >> numero;

        soma += numero;
        quantidade++;
    }
    double media = static_cast<double>(soma) / quantidade;

    cout << "A soma dos numeros lidos e no minimo 100.\n";
    cout << "Quantidade de numeros lidos: " << quantidade << endl;
    cout << "Media dos numeros lidos: " << media << endl;

    return 0;
}
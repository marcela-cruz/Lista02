// Escrever um algoritmo em função de uma escolha, solicitar os dados
// necessários para o cálculo da respectiva área. Enviar mensagem de erro se o
// usuário escolher uma opção inexistente. Encerrar o algoritmo somente quando
// selecionada a opção de finalização.

// 1 – Triângulo
// 2 – Quadrado
// 3 – Retângulo
// 4 – Círculo
// 5 - Fim

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int escolha;

    while (true)
    {
        cout << "Escolha uma opcao:\n";
        cout << "1 - Triangulo\n";
        cout << "2 - Quadrado\n";
        cout << "3 - Retangulo\n";
        cout << "4 - Circulo\n";
        cout << "5 - Fim\n";
        cout << "Opcao: ";
        cin >> escolha;

        if (escolha == 1)
        {
            double base, altura;
            cout << "Digite a base do triangulo: ";
            cin >> base;
            cout << "Digite a altura do triangulo: ";
            cin >> altura;

            double area = (base * altura) / 2;
            cout << "A area do triangulo e: " << area << endl;
        }
        else if (escolha == 2)
        {
            double lado;
            cout << "Digite o lado do quadrado: ";
            cin >> lado;

            double area = lado * lado;
            cout << "A area do quadrado e: " << area << endl;
        }
        else if (escolha == 3)
        {
            double base, altura;
            cout << "Digite a base do retangulo: ";
            cin >> base;
            cout << "Digite a altura do retangulo: ";
            cin >> altura;

            double area = base * altura;
            cout << "A area do retangulo e: " << area << endl;
        }
        else if (escolha == 4)
        {
            double raio;
            cout << "Digite o raio do circulo: ";
            cin >> raio;

            double area = M_PI * pow(raio, 2);
            cout << "A area do circulo e: " << area << endl;
        }
        else if (escolha == 5)
        {
            cout << "Encerrando o programa..." << endl;
            break;
        }
        else
        {
            cout << "Opcao invalida. Tente novamente." << endl;
        }

        cout << endl;
    }

    return 0;
}
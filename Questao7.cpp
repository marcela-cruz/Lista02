// Entrar via teclado com “N” valores quaisquer. O valor “N” (que
// representa a quantidade de números) será digitado, deverá ser positivo, mas
// menor que vinte. Caso a quantidade não satisfaça a restrição, enviar
// mensagem de erro e solicitar o valor novamente. Após a digitação dos “N”
// valores, exibir:
//  O maior valor;
//  O menor valor;
//  A soma dos valores;
//  A média aritmética dos valores;
//  A porcentagem de valores que são positivos;
//  A porcentagem de valores negativos;
// Após exibir os dados, perguntar ao usuário de deseja ou não uma nova execução do
// algoritmo. Consistir a resposta no sentido de aceitar somente “S” ou “N” e
// encerrar o algoritmo em função dessa resposta.

#include <iostream>
using namespace std;

int main()
{
    char resposta;

    do
    {
        int quantidade;

        do
        {
            cout << "Digite a quantidade de valores (entre 1 e 19): ";
            cin >> quantidade;
        } while (quantidade <= 0 || quantidade >= 20);

        int maior = INT_FAST16_MIN;
        int menor = INT_FAST16_MAX;
        int soma = 0;
        int positivos = 0;
        int negativos = 0;

        for (int i = 1; i <= quantidade; i++)
        {
            int valor;
            cout << "Digite o valor " << i << ": ";
            cin >> valor;

            if (valor > maior)
            {
                maior = valor;
            }

            if (valor < menor)
            {
                menor = valor;
            }

            soma += valor;

            if (valor > 0)
            {
                positivos++;
            }
            else if (valor < 0)
            {
                negativos++;
            }
        }

        double media = static_cast<double>(soma) / quantidade;
        double porcentagemPositivos = static_cast<double>(positivos) / quantidade * 100;
        double porcentagemNegativos = static_cast<double>(negativos) / quantidade * 100;

        cout << "Maior valor: " << maior << std::endl;
        cout << "Menor valor: " << menor << std::endl;
        cout << "Soma dos valores: " << soma << std::endl;
        cout << "Média aritmética dos valores: " << media << std::endl;
        cout << "Porcentagem de valores positivos: " << porcentagemPositivos << "%" << std::endl;
        cout << "Porcentagem de valores negativos: " << porcentagemNegativos << "%" << std::endl;

        cout << "Deseja executar novamente? (S/N): ";
        cin >> resposta;
    } while (resposta == 'S' || resposta == 's');

    return 0;
}

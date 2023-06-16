// Foi realizada uma pesquisa de algumas características físicas da população
// de um certa região. Foram entrevistadas 500 pessoas e coletados os seguintes
// dados:
// a- sexo: M (masculino) e F (feminino)
// b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)
// c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
// d- idade
// Deseja-se saber:
// o a quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos e que
// tenham olhos verdes e cabelos louros.

#include <iostream>
using namespace std;

int main()
{
    int quantidadeFOVCL = 0;

    for (int i = 0; i < 500; i++)
    {
        char sexo, olhos, cabelos;
        int idade;

        cout << "Informe o sexo (M/F) da pessoa " << i + 1 << ": ";
        cin >> sexo;

        cout << "Informe a cor dos olhos (A/V/C) da pessoa " << i + 1 << ": ";
        cin >> olhos;

        cout << "Informe a cor dos cabelos (L/C/P) da pessoa " << i + 1 << ": ";
        cin >> cabelos;

        cout << "Informe a idade da pessoa " << i + 1 << ": ";
        cin >> idade;

        if (sexo == 'F' || sexo == 'f')
        {
            if (idade >= 18 && idade <= 35 && olhos == 'V' && cabelos == 'L')
            {
                quantidadeFOVCL++;
            }
        }
    }

    cout << "Quantidade de individuos do sexo feminino, idade entre 18 e 35 anos, olhos verdes e cabelos louros: " << quantidadeFOVCL << endl;

    return 0;
}

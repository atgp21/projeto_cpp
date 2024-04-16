/******************************************************************************

3) Faça um programa em c++ que inicialmente solicite a entrada 
de um número n e outro número m, e logo permita a entrada de uma
matriz A de números inteiros de nxm. A seguir calcule e exiba a transposta de A. 
Observação: n e  m devem ser maiores que 0 e podem ser diferentes.

*******************************************************************************/
#include <iostream>
#include <locale.h>
#include <iomanip>
#include <climits> 
using namespace std;

int Linha = 0, Coluna = 0;

int main()
{   
    setlocale(LC_ALL,"");
    do{
        cout << "Digite o número de linhas da Matriz Transposta = ";
        cin >> Linha;
        
    }while (Linha < 2);

    do{
        cout << "Digite o número de colunas da Matriz Transposta = ";
        cin >> Coluna;
         
    }while (Coluna < 2);
   
    int MatrizPrincipal[Linha][Coluna];
    int MatrizTransposta[Coluna][Linha];

    for (int i = 0; i < Linha; i++) {
        for (int j = 0; j < Coluna; j++) { 
            MatrizPrincipal[i][j] = 0;
        }
    }

    for (int i = 0; i < Coluna; i++) {
        for (int j = 0; j < Linha; j++) { 
            MatrizTransposta[i][j] = 0;
        }
    }

    for (int i = 0; i < Linha; i++) {
        for (int j = 0; j < Coluna; j++) { 
            cout << "Digite um número = ";
            cin >> MatrizPrincipal[i][j];
        }
    }

    for (int i = 0; i < Linha; i++) {
        for (int j = 0; j < Coluna; j++) {
            MatrizTransposta[j][i] = MatrizPrincipal[i][j];
        }
    }
    
    cout << "\n\n\tMatriz Principal";

    for (int i = 0; i < Linha; i++) {
        cout << "\n";
        for (int j = 0; j < Coluna; j++) {
            cout << "\t" << MatrizPrincipal[i][j];
        }
    }
    
    cout << "\n\n\tMatriz Transposta";

    for (int i = 0; i < Coluna; i++) {
        cout << "\n";
        for (int j = 0; j < Linha; j++) {
            cout << "\t" << MatrizPrincipal[j][i];
        }
    }

    return 0;
}

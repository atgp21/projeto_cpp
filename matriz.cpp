/******************************************************************************

7) Faça um programa que permita a entrada de um número n e logo permita a 
entrada de duas matrizes de inteiros de nxn, a seguir calcule e exiba a soma 
das duas matrizes.

*******************************************************************************/
#include <iostream>
#include <locale.h>
#include <iomanip> 
#include <climits> 
using namespace std;

int iLinha = 0, iColuna = 0, iTam = 0;

int main()
{   
    setlocale(LC_ALL,"");

    do{
        cout << "\nInforme o Tamanho das Matrizes = ";
        cin >> iTam;
        
    }while (iTam < 2);

    iLinha = iColuna = iTam;

    int iMatrizPrincipal[iLinha][iColuna];
    int iMatrizSecundaria[iColuna][iLinha];

    for (int i = 0; i < iLinha; i++) {
        for (int j = 0; j < iColuna; j++) { 
            iMatrizPrincipal[i][j] = 0;
            iMatrizSecundaria[i][j] = 0;
        }
    }

    cout << "Números da Primeira Matriz\n\n";
 
    
    for (int i = 0; i < iLinha; i++) {
        for (int j = 0; j < iColuna; j++) { 
            cout << "Informe um número = ";
            cin >> iMatrizPrincipal[i][j];
        }
    }
            
    cout << "\nNúmeros da Segunda Matriz\n\n";

    for (int i = 0; i < iLinha; i++) {
        for (int j = 0; j < iColuna; j++) { 
            cout << "Informe um número = ";
            cin >> iMatrizSecundaria[i][j];
        }
    }

    cout << "\n\nPrincipal\t\t" << "Secundária\t\t" << "Soma\t\t";
         


    for (int i = 0; i < iLinha; i++) {
        cout << "\n";
        for (int j = 0; j < iColuna; j++) { 
            cout << iMatrizPrincipal[i][j]  << "\t";
        }
        cout << "\t";
        for (int j = 0; j < iColuna; j++) { 
            cout << iMatrizSecundaria[i][j] << "\t";
        }
        cout << "\t";
        for (int j = 0; j < iColuna; j++) { 
            cout << (iMatrizPrincipal[i][j] + 
                     iMatrizSecundaria[i][j]) << "\t";
        }
    }

    return 0;
}


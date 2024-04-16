/******************************************************************************

4) Faça um programa em c++ que inicialmente solicite a entrada de 
um número n inteiro e maior do que 1, e logo chame uma função F0 
que permitirá carregar um vetor números reais de dimensão n. E logo, 
a função F0 chamará uma função F1 para ordenar o vetor de maior a menor.
Então, a função F1 chamará uma terceira função F2 para mostrar o vetor 
de forma ordenada.

*******************************************************************************/
#include <iostream>

using namespace std;

#include <iostream>
#include <iomanip> 
#include <climits> 

using namespace std;

void F0(int iVetor[], int iNumero);
void F1(int iVetor[], int iNumero);
void F2(int iVetor[], int iNumero);

int iNum = 0;

int main()
{

    do{
        cout << "Informe um número maior do que 1 = ";
        cin >> iNum;
        
        if (iNum < 2){
            cout << "\nO número informado deve ser maior do que 1.";
            cout << "\n       Informe novamente!..\n";
        }
            
    }while (iNum < 2);

    int iVetor [iNum];

    F0(iVetor, iNum);

    return 0;
}

void F0(int iVetor[], int iNumero){
 
    for (int i = 0; i < iNumero; i++){
        cout << "\nInforme um número = ";
        cin >> iVetor[i];
    }
    
    F1(iVetor, iNumero);
    
    return;
}

void F1(int iVetor[], int iNumero){
 
    int iAux = 0;

    for (int i = 0; i < iNumero; i++) {
        for (int j = i+1; j < iNumero; j++) {
            if (iVetor[i] < iVetor[j]){
                iAux = iVetor[i];
                iVetor[i] = iVetor[j];
                iVetor[j] = iAux;
            }
        }            
    }        
 
    F2(iVetor, iNumero);
    
    return;
    
}

void F2(int iVetor[], int iNumero){
 
    for (int i = 0; i < iNumero; i++){
        cout << iVetor[i] << "\t ";
    }
    
    return;
}


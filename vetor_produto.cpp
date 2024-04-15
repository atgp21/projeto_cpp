/******************************************************************************

7) Álgebra: Faça um programa que permita a entrada de dois vetores de tamanho 3. 
E logo, mostre o produto escalar entre os dois vetores.


*******************************************************************************/
#include <iostream>

using namespace std;

int vetorA[3], vetorB[3], num = 0, iOpc=0, iJ =-1;

int main()
{
    
    
    for (int i = 0; i < 3; i++) {vetorA[i]=0; vetorB[i]=0;}
    
    do{
        cout << "Informe um número para o primeiro vetor: ";
        cin >> num;
        
        if (num == 0){
            num = 99;
            cout <<"\nDeseja realmente sair do programa? 1-sim 2-não \n";
            cin >> iOpc;
            if (iOpc == 1){break;}
            }
            else if (num >0){
                vetorA[++iJ] = num;
    
        }
    }while (iJ <2);
    
    if (iOpc ==1)
    {
        return 0;
    }
    
    num = 0; iJ = -1; iOpc = 0;
    
    do{
        cout << "Informe um número para o segundo vetor: ";
        cin >> num;
        
        if (num == 0){
            num = 99;
            cout <<"\nDeseja realmente sair do programa? 1-sim 2-não \n";
            cin >> iOpc;
            if (iOpc == 1){break;}
            }
            else if (num >0){
                vetorB[++iJ] = num;
    
        }
    }while (iJ <2);
      
      if (iOpc ==1)
    {
        return 0;
    }
    
    int produto = 0;
    cout << "\n\nA *B";
    
    for (int i = 0; i < 3; i++)
    {
        cout << "\n" << vetorA[i] << "*" << vetorB[i]<< " = "
                                  << vetorA[i] * vetorB[i];
                                  
       produto += (vetorA[i] * vetorB[i]);
    }

cout << "\n\nO resultado do produto escalar entre os vetores A e B é = " << produto;
    return 0;
}


/******************************************************************************

Faça o algoritmo que calcule o valor em Reais, correspondente aos dólares que um turista possui no cofre do hotel. 
O programa deve solicitar os seguintes dados: Quantidade de dólares guardados no cofre e cotação do dólar naquele dia.
Se algum dos valores ingressados for negativo: O algoritmo deve exibir na tela a mensagem: “Entradas Incorretas” e logo  
exibir na tela o/os  e somente o/os valores negativos.  Se nenhum valor for negativo o algoritmo deve imprimir na 
tela a mensagem: “a quantidade de reais e “ seguida do valor em reais.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float dolar;
    float real;
    float cot;
    
    cout << "Insira a quantidade de dólares guardados no cofre:\n";
    cin >> dolar;
    cout << "Insira a cotação do dólar:\n";
    cin >> cot;
    
   if (dolar < 0)
   {
       cout << "Entradas incorretas";
       return 0;
   }
   else if (cot < 0)
   {
       cout << "Entradas incorretas";
       return 0;
   }
   
   real = dolar * cot;
   cout << "O valor em real é = " << real;
    

    return 0;
}





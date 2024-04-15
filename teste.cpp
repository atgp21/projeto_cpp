/******************************************************************************

Dadas as idades (tipo int) e os pesos (tipo float) de duas pessoas (pessoa1 e pessoa2), 
Exibir quem é a pessoa mais velha e a sua idade e quem é a pessoa mais leve e o seu peso com dois dígitos após a vírgula. 
Exemplo: a pessoa1 é a mais velha e tem 102 anos. A pessoa1 é a mais leve e tem 64,50 kgs.
*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int id1 = 0;
    int id2 = 0;
    float p1 = 0;
    float p2 =0;
 
    cout<< "Informe a idade da pessoa 1 ";
    cin >> id1;
    
    cout << "Infome a idade da pessoa 2 ";
    cin >> id2;
    
    cout << "Informe o peso da pessoa 1 ";
    cin >> p1;
    
    cout << "Informe o peso da pessoa 2 ";
    cin >> p2;
    
    if (id1 > id2)
{
    cout << "A pessoa 1 é mais velha e tem " << id1 << " anos ";
}
else 
{
    cout << "A pessoa 2 é mais velha e tem " << id2 << " anos ";
}

if (p1 < p2)
{
    cout << setprecision (2) << fixed;
    cout<< "\nA pessoa é mais leve e tem " << p1 << "kgs" << endl;
    
}
else 
{
    cout << setprecision(2) << fixed;
    cout<< "\nA pessoa 2 é mais leve e tem " << p2  << "kgs" << endl;
}
    return 0;
}


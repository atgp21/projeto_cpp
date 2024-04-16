/******************************************************************************

Estudando ponteiros

*******************************************************************************/
#include <iostream>

using namespace std;

/*int main()
{
    int x=10;
    cout<< "no endereço \t" <<&x << " temos um inteiro de valor ";
    cout<< x;

    return 0;
}
*/

/*

Operadores
& : endereço
* : valor

*/
/*
int main ()
{
    int x=25;
    int *y;
    y=&x;
    *y=30;
    cout << x;
    
    
    return 0;
}
*/

/*
por valor
void troca (int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    
    cout<< "Os valores trocados na funcao são " << x <<"\t" << y << "\n";
}

int main()
{
    int a = 5;
    int b=10;
    cout << "Os valores antes da troca são " << a <<"\t"<< b <<"\n";
    troca(a,b);
    cout <<"Os valores apos a troca são " <<a <<"\t" <<b;
    
    return 0;
}

*/

/*Por referencia*/
/*
void troca (int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
    cout << "Os valores trocados na funcao sao " <<*x <<"\t" <<*y <<"\n";
}

int main()
{
    int a=5;
    int b=10;
    cout << "Os valores antes da troca sao " <<a <<"\t" <<b <<"\n";
    troca(&a, &b);
    cout << "Os valores apos a troca sao " << a <<"\t" <<b;
    return 0;
}
*/
/*
struct pessoa
{
    int idade;
    float peso;
    
};

int main ()
{
    pessoa *pt;
    pessoa p1;
    pt=&p1;
    cout << "digite a idade \n";
    cin >> pt -> idade;
    cout << "digite o peso \n";
    cin >> pt ->peso;
    cout << "a idade é " <<pt ->idade <<"\n";
    cout << "o peso é " <<pt-> peso << "\n";
    
    
    return 0;
}

*/

int main()
{
    int v=10;
    float f = 2.1;
    void *p;
    p=&v;
    cout <<*(int*)p << "\n";
    p=&f;
    cout << *(float*)p;
    
    return 0;
}


















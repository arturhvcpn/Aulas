#include <iostream>
#include <string>
#include <locale.h>
#include <stdio.h>

using namespace std;

#define linha_par(x) cout << "Número par ==  " << x << endl
#define linha_impar(y) cout << "Número impar == " << y << endl
#define linha_multiplo_7(z) cout << #z "Número é Múltiplo de 7 == " << z << endl  
#define linha_numero_primo(k) cout << #k "Número Primo == " << k << endl

int main()
{
int input_data, multiplo_7;

cout<< "Informe um número inteiro " << endl;
//entrada de dados
cin >> (input_data);

 if ( input_data % 7 == 0 )
 {
     cout<< "blabla == "<< input_data << endl;
    linha_multiplo_7(input_data);
 }
 
 else
 {
     cout<< "blabladds = "<< input_data << endl;
     }
}
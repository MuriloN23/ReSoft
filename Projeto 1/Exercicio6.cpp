#include <iostream>


using namespace std;

int main(void){
    float inteiroA, inteiroB, soma, sub, mult, div, rest;
    cout << "Digite o numero inteiro A: ";
    cin >> inteiroA;
    cout << "Digite o numero inteiro B: ";
    cin >> inteiroB;
// Operações 
soma = inteiroA+inteiroB;
sub = inteiroA-inteiroB;
mult = inteiroA*inteiroB;
div = inteiroA/inteiroB;
rest = static_cast<int> (inteiroA) % static_cast<int> (inteiroB);

    cout<< "Soma: "<<soma<<endl;
    cout<< "Subtracao: "<<sub<<endl;
    cout<< "Multiplicacao: "<< mult<<endl;
    cout<< "Divisao: "<<div<<endl;
    cout<< "Resto: "<< rest<<endl;
    
    return 0;
    
}
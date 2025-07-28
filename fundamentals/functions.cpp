#include <iostream>
#include <cmath>
#include "headers/multiTests.h"

void printHeader(){                                                            //Função VOID
    std::cout << "Usamos a IOStream para Input e Output usando o Standard\n";
    //não usamos return em uma função void
}
int inputValue(){                                                              //Função com retorno
    std::cout << "Digite um número: ";
    int input{};
    std::cin >> input;
    return input;
}
double sqrtValue(int x){                                                       //Atribuição de parametros em uma função
    //Função desnecessária, usada apenas para mostrar a atribução de parametros.
    double sqrtNum = sqrt(x);
    return sqrtNum;
}//invoca o destructor e destrói x aqui. Nesse caso 

void printSqrt(int x, double sqrtNum);                                         //Foward Declaration

int main(){
    printHeader();

    int num{inputValue()};

    std::cout << num << " em dobro é " << num*2 << "\n";

    double sqrtNum = sqrtValue(num);

    printSqrt(num, sqrtNum);

    multi_test();

    return 0;
}

void printSqrt(int num, double sqrtNum){
    std:: cout << "A raiz quadrada de " << num << " é: " << sqrtNum << "\n";
}
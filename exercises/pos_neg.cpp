#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Digite um número: ";
    cin >> x;

    if (x > 0){
        cout << x << " é um número positivo.";
    } else if (x < 0){
        cout << x << " é um número negativo.";
    } else {
        cout << x << " = 0";
    }
    return 0;
}
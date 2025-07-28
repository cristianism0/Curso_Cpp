#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int x, y;
    cout << "Digite um número: ";
    cin >> x;
    cout << "Digite um número: ";
    cin >> y;

    //cout << max(x,y);    //não funciona, temos que armazenar o valor máximo para exibilo.

    int maxValue = max(x,y);

    cout << "O maior valor é: " << maxValue << "\n\n";

    if (x > y) {         
        cout << "O número: " << x << " é maior que: " << y;
    } else{                          //podemos usar o else if também.
        cout <<  "O número: " << y << " é maior que: " << x;
    }
    cout << std::endl;  //this skips to the next line (INEFFICIENT) keep flushing the buffer, slower, keep on \n
    //---------------
    //We can also, write a condition if-else this way: Ternary operation

    string result = (x > 10) ? "X é maior que 10" : "X é menor que 10";

    return 0;
}
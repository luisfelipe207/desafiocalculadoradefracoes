#include <iostream>
using namespace std;

int mdc(int num2,  int num4) {
     while (num2 =! 0) 
    {
        int r =  num2 %  num4;
        num2 = num4;
        num2 = r;
        num4 = r;
    }
    return 1;

} 
    

int main() {
   int  num1;int  num2;int  num3;int  num4;
    cout << "insira o primeiro numerador" << endl;
    cin >> num1;
    cout << "insira o primeiro denominador" << endl;
    cin >> num2;
    cout << "insira o segundo numerador" << endl;
    cin >> num3;
    cout << "insira o segundo denominador" << endl;
    cin >> num4;

    int  resultado;
    cout << "O MDC de " << num1 << " e " << num2 << " e: " << mdc ( num2,  num4) << endl;
return 0;
}
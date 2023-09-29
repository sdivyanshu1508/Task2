  //                            C++ Program for a simple calculator.
#include <bits/stdc++.h>
using namespace std;
void Calci(char opp , int a, int b){
switch(opp) {
    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a / b;
      break;

    default:
      cout << "Error! opp is not correct";
      break;
  }
}
int main() {

  char opp;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> opp;

  cout << "Enter two operand: ";
  cin >> num1 >> num2;
  Calci(opp,num1,num2);
  return 0;
}

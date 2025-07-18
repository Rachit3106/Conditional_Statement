/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;   

int main(){
    int num1, num2;
    char ch;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> ch;
    switch(ch){
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}
/*
Output:
1) Enter two numbers: 5 10
   Enter an operator (+, -, *, /): *
   Result: 50
2) Enter two numbers: 20 4
   Enter an operator (+, -, *, /): /
    Result: 5
*/
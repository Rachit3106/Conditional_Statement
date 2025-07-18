/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main() {
   int num1, num2, num3, greatest;
   cout << "Enter three numbers: ";
   cin >> num1 >> num2 >> num3;
   greatest = num1;
   if(num2>greatest){
        greatest = num2;
   }
    if(num3>greatest){
        greatest = num3;
   }
   cout << "The greatest number is: " << greatest << endl;
   return 0;
}
/*
Output:
1) Enter three numbers: 5 10 3  
The greatest number is: 10
2) Enter three numbers: 15 10 20
The greatest number is: 20
*/
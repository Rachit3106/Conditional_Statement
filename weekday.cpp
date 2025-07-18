/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int  main(){
    int day;
    cout << "Enter a number (1-7): ";
    cin >> day;
    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! please enter from 1 to 7" << endl;
    }
    return 0;
}
/*
Output:
1) Enter a number (1-7): 3
Wednesday
2) Enter a number (1-7): 6
Saturday
3) Enter a number (1-7): 8
Invalid input! please enter from 1 to 7
*/
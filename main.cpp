#include <iostream>

void showAllocatedSpaceInMemory();

void showSumOfTwoVariables();

void showInputAndOutput();

void showValueOfVariableWithTypeModify();

using namespace std;

int main() {

    /** Variables */

    /* show sum of two numbers in console */
    showSumOfTwoVariables();

    /* show te space of variable that is allocated in memory */
    showAllocatedSpaceInMemory();

    /* show input and output data in console */
    showInputAndOutput();

    /* work with type modify */
    showValueOfVariableWithTypeModify();


    return 0;
}

void showValueOfVariableWithTypeModify() {
    long int a = 0;
    int b = 0;
    signed c = 0;
    unsigned d = 0;
    char e = 'a';
    short int f = 0;

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;

}

void showInputAndOutput() {

    cout << "Learning input and output in c++ " << endl;

    cout << "normal: " << 10 + 50 << endl;
    //cout << "hexadecimal: " << hex << 10 + 50 << endl;

    int num = 0;
    int num2 = 0;

    cout << "Enter with the first number" << endl;
    cin >> num;

    cout << "Enter with the second number" << endl;
    cin >> num2;

    int result = num + num2;
    cout << result;
}

void showSumOfTwoVariables(){
    int num, num2;
    num = 10;
    num2 = 500;

    cout << "The sum of: " << num << " + " << num2 << " = " << num + num2 << endl;
}

void showAllocatedSpaceInMemory() {
    int varInt = 100;
    char c = 't';
    double varDouble = 5.99;

    cout << "The value of varInt is: " << varInt << " and the size in memory is: " << sizeof(varInt) << " bytes" << endl;
    cout << "The value of c is: " << c << " and the size in memory is: " << sizeof(c) << " bytes" << endl;
    cout << "The value of varDouble is: " << varDouble << " and the size in memory is: " << sizeof(varDouble) << " bytes" << endl;
}

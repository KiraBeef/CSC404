#include <iostream>
using namespace std;

int main()
{
    int num1, *ptr1;
    double num2,*ptr2;

    ptr1=&num1;
    ptr2=&num2;

    cout << "ptr1 is " << ptr1 << endl;
    cout << "ptr2 is " << ptr2 << endl << endl;

    cout << "The address  of num1 is " << &num1 << endl;
    cout << "The address  of num2 is " << &num2 << endl;

}
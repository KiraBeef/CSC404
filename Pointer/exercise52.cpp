#include <iostream>
using namespace std;

int main()
{
    int *ptr1,*ptr2;
    ptr1=  new int();
    ptr2=  new int();
    cout << "Number 1: ";
    cin >> *ptr1;
    cout << "Number 2: ";
    cin >> *ptr2;

    if(*ptr1>=*ptr2)
        cout << "Big Number: " << *ptr1;
    else    
        cout << "Big Number: " << *ptr2;
}
#include <iostream>
using namespace std;

int main()
{
    int x=10;
    int *p, *q;
    p=new int();
    *p=20;
    cout << x << endl; //10
    cout << &x << endl;
    cout << p << endl; 
    cout << &p << endl;
    cout << *p << endl; //20

    q=p;
    *q=100;
    q=&x;
    *q=350;
    cout << x << endl; //350
    cout << &x << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl; //100
}
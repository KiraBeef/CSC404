#include <iostream>
using namespace std;

int main()
{
    int num=5; //Declare variable
    int *ptr; //Declare pointer variable
    

    ptr=&num; //assign ptr to variable
    cout << num << endl;  //display value of num
    cout << &ptr << endl; //display memory address
    cout << *ptr; //display value pointed
}
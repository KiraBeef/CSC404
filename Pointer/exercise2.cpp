#include <iostream>
using namespace std;

int main()
{
int data =50, num =35;
int *m,*n;
m=&data;
n=new int();
*m=num;
*n=5;
num=num+*n;
cout << data << " " << num << " " << *m << " "<< *n  << endl; 
// 35 40 35 5


n=m;
*n=700;
m=&num;
*m=7;
cout << data << " " << num << " " << *m << " "<< *n  << endl;
// 700 7 7 700
}   

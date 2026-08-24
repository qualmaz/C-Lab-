// call by value
#include <iostream>
using namespace std;

void swap(int x,int y)
{
    int t= x;
    x=y;
    y=t;
    cout <<"After Swap: a ="<< x << "b= "<< y << endl;
}

int main()
{
    int a=40;
    int b=50;
    cout << "before swap: a="<< a<< "b="<<b << "\n";
    swap(a,b);
    return 0;
}
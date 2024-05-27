
#include<iostream>
using namespace std;

template<typename T>
T add(T a ,T b)
{
    return a+b;
}
int main()
{
    cout<<"Hello from c++ 20"<<endl;
    cout<<"Sum is ::"<< add(2,3)<<endl;
    return 0;
}
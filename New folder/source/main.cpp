#include<iostream>
using namespace std;

template<typename T>  
T add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<"The sum is ::"<< add(7,3) <<endl;
    cout<<"Welcome from C++ 20"<<endl;
    return 0;
}
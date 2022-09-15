#include<iostream>
using namespace std;
double power(int , double);
double power(int n, double m)
{
    int i,r=1;
    for(i=n;i>0;i--)
    {
        r=r*m;
    }
    return r;
}
double power(double m)
{
    return m*m;
}
int main()
{
    int index;
    double base;
    double re1,re2;
    cout<<"\nEnter the index and the base : "<<endl;
    cin>>index>>base;
    re1=power(index, base);
    cout<<"Result is : "<<re1<<endl;
    cout<<"\nEnter the base only : "<<endl;
    cin>>base;
    re2=power(base);
    cout<<"Result is : "<<re2<<endl;
}

#include<iostream>
using namespace std;

int power()
{
int a,b;
cin>>a>>b;
int as=1;
for(int i=1;i<=b;i++)
{
    as=as*a;
}
return as;

}
int main()
{
    int a=power();
cout<<"Answer is "<<a<<endl;
int b=power();
cout<<"Answer is "<<b;
}
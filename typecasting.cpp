#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter any Character : ";
cin>>ch;
int res=(int)ch;
if(res>64 && res<90)
cout<<ch<<" Ais a capital letter";
else if(res>47 && res<56)
cout<<ch<<" is a Numeric Value";
if(res>96 && res<121)
cout<<ch<<" is a small letter";
}
#include<iostream>
using namespace std;

int main(){
 cout<<"Choose Option\n";
 cout<<"1. Addition\n2. Multiplication\n3. Substration\n";
 int ch;
 cin>>ch;
 int a,b;
 cout<<"Enter any Two Numbers : ";
 cin>>a;
 cin>>b;

switch(ch)
{
case 1: cout<<"Answer is "<<a+b;
break;
case 2: cout<<"Answer is "<<a*b;
break;
case 3: cout<<"Answer is "<<a-b;
break;
default : cout<<"Please Enter Choose Valid Option";



}

}
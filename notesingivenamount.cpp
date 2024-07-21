#include<iostream>

using namespace std;

int main()
{
int n;
cout<<"Enter any Amount : ";
cin>>n;
int op;
cout<<"Select any one Option\n";
cout<<"1. Notes of Hundred\n2. Notes of Thousand\n3. Notes of 10\n4. Notes of 50\n5. Notes of 20";
cin>>op;
switch (op)
{
case 1: cout<<n/100;
break;
case 2: cout<<n/1000;
break;
case 3: cout<<n/10;
break;
case 4: cout<<n/50;
break;
case 5: cout<<n/20;
break;
default : cout<<"Please Select Valid Option";
}
}
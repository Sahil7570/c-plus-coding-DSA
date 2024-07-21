#include<iostream>
using namespace std;
int evenodd()
{
    int n;
cout<<"Enter any Number : ";
cin>>n;
if(n%2==0)
{
    return 0;
}
else{
    return 1;
}

}
int main(){

int ans=evenodd();
if(ans==0){
    cout<<"Number is Even\n";
}
else{
cout<<"Number is Odd\n";
}
int ans1=evenodd();
if(ans1==0){
    cout<<"Number is Even";
}
else{
cout<<"Number is Odd";
}

}
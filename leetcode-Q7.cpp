#include<iostream>
using namespace std;

//TO FIND PAIR OF NUMBERS WHOSE SUM IS EQUAL TO GIVEN INTEGER.

int main(){
int n;
cout<<"Enter size of array : ";
cin>>n;
int a[n];
cout<<"Enter array elements : ";
for(int i=0;i<n;i++){
cin>>a[i];
}
int ans;
int s;
cout<<"Enter any Number : ";
cin>>s;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==s){
           cout<<a[i]<<a[j]<<endl;
        }
    }
}

}

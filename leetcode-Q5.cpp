#include<iostream>
using namespace std;
int uniquesol(int a[],int n){
int ans=0;
for(int i=0;i<n;i++){
    ans=ans^a[i];
}
return ans;
}
int main(){
    int m;
    cin>>m;
    int n=2*m+1;
    int a[n];
    cout<<"Enter array Elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=uniquesol(a,n);
    cout<<result<<endl;
}

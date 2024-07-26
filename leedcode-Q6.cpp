#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of 1st array : ";
    cin>>n;
    int a1[n];
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    int m;
    cout<<"Enter size of 2nd array : ";
    cin>>m;
    int a2[m];
    cout<<"Enter array elements : ";
    for(int j=0;j<m;j++){
        cin>>a2[j];
    }
 for(int i=0;i<n;i++){
       int  element=a1[i];
    
    for(int j=0;j<m;j++){
    if(element<a2[j])
    break;
        if(element==a2[j]){
            cout<<element;
            a2[j]=-1;
            break;
        }
    }
 }
}
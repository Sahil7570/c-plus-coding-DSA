#include<iostream>
using namespace std;

//TO FIND INTERSECTION (COMMON INTEGER) BETWEEN TO GIVEN ARRAYS//

int main(){
    int i=0,j=0;
     int n;
    cout<<"Enter size of 1st array : ";
    cin>>n;
    int a1[n];
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++){
        cin>>a1[i];
    }
    int m;
    cout<<"Enter size of 2nd array : ";
    cin>>m;
    int a2[m];
    cout<<"Enter array elements : ";
    for( j=0;j<m;j++){
        cin>>a2[j];
    }
    
while(i<n && j<m){
    if(a1[i]==a2[j]){
        cout<<a1[i];
        i++,j++;
    }
    else if(a1[i]<a2[j]){
        i++;
    }
    else{
        j++;
    }
}



}
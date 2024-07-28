#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int key){
for(int i=0;i<=n;i++){
    if(a[i]==key){
        return 1;
    }
    else{
        return 0;
    }
}
}
int main(){
    int key;
    cout<<"Enter any number to search for : ";
    cin>>key;
    int a[5]={1,3,5,7,9};
    bool found=linearsearch(a,5,key);
    if(found==1){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
}
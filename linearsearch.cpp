#include<iostream>
using namespace std;

int  search(int a[],int size,int key)
{
for(int i=0;i<size;i++){
if(a[i]==key){
    return 1;
}

}
return 0;

}
int main()
{
int key;
cout<<"Ente the Element to searh for : ";
cin>>key;
int a[10]={12,24,15,284,252,14,17,23,46,235};
bool found=search(a,10,key);
if(found==1){
    cout<<"Key is Present";
}
else
{
    cout<<"Key is not present";
}

}
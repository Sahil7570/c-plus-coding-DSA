#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
int s=0;
int e=n-1;
int mid=(s+e)/2;
while(s<=e){
    if(a[mid]==key)
    return mid;
    else if(key>a[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=(s+e)/2;
}
return -1;
}
int main(){
    int key;
    cout<<"Enter Number to search in even array : ";
    cin>>key;
    int key1;
    cout<<"Enter Number to search in odd array : ";
    cin>>key1;
int even[6]={2,4,6,8,10,12};
int odd[5]={1,3,5,7,9};
int evenindex=binarysearch(even,6,key);
cout<<"even Index is : "<<evenindex<<endl;
int oddindex=binarysearch(odd,5,key1);
cout<<"odd index is : "<<oddindex<<endl;
}
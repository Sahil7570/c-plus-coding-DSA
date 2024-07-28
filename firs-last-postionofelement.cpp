#include<iostream>
using namespace std;

int firstoccu(int a[],int n,int key){
int start=0,end=n-1;
int ans=-1;
int mid=start+(end-start)/2;
while(start<=end){
if(a[mid]==key){
    ans=mid;
    end=mid-1;

}
else if(key>a[mid]){
    start=mid+1;
}
else{
    end=mid-1;
}
mid=start+(end-start)/2;
}
return ans;

}
int lastoccu(int a[],int n,int key){
int start=0,end=n-1;
int ans1=-1;
int mid=start+(end-start)/2;
while(start<=end){
if(a[mid]==key){
    ans1=mid;
    start=mid+1;
}
else if(key>a[mid]){
    start=mid+1;
}
else{
    end=mid-1;
}
mid=start+(end-start)/2;
}
return ans1;
}
int main(){

int key;
cout<<"Enter element to search for : ";
cin>>key;
int a[12]={1,2,3,4,5,5,5,5,5,5,5,6};
int first=firstoccu(a,12,key);
int last=lastoccu(a,12,key);
cout<<"fitst is : "<<first<<endl;
cout<<"last is : "<<last;
}


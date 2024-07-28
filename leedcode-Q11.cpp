#include<iostream>
using namespace std;

int getpivot(int a[],int n){
    int start=0,end=n-1;
int mid=start+(end-start)/2;
while(start<end){
    if(a[mid]>=a[0]){
        start=mid+1;
    }
    else{
        end=mid;
    }
    mid=start+(end-start)/2;
}
return start;
}

int main(){
    int a[5]={3,8,10,1,17};
cout<<"pivot is : "<<getpivot(a,5);
}
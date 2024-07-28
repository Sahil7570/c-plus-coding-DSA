#include<iostream>
using namespace std;

//TO FIND MAXIMUM DISTANCE BETWEEN TWO STALL IN WHICH COWS ARE
//PLACE SO THAT THEY CANT HURT EACH OTHER

bool ispossible(int a[],int n,int k, int mid){
int cows=1;
int lastpos=a[0];
for(int i=0;i<n;i++){
    if(a[i]-lastpos>=mid){
cows++;
if(cows==k){
    return true;
}
    }
}
return false;
}

int aggresivecow(int a[],int n,int k){
int start=0;
int maxi=-1;
for(int i=0;i<n;i++){
    maxi=max(maxi,a[i]);
}
int end=maxi;
int ans=0;
int mid=start+(end-start)/2;
while(start<=end){
    if(ispossible(a,n,k,mid)){
ans=mid;
start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
int main(){
    int stall[6]={1,2,3,4,5,6};
    int k=2;
   cout<<"Maximum distance is : "<< aggresivecow(stall,6,k);

    }
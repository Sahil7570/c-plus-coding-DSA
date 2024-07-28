#include<iostream>
using namespace std;

//POSSIBLE OUTCOME VALUES

bool ispossible(int a[],int n,int m,int mid){
int studentcount=1;
int pagesum=0;
for(int i=0;i<n;i++){
if(pagesum+a[i]<=a[mid]){
  pagesum+=a[i];
}
else{
studentcount++;
if(studentcount>m || a[mid]>a[i]){
return false;
}
else{
    pagesum=a[i];
}
}
}
return true;
}


//BOOK ALLOWCATION

int bookallowcation(int a[],int n,int m){
 int start=0;
int sum=0;
int ans=0;
for(int i=0;i<n;i++){
    sum=sum+a[i];
}
int end=sum,mid=start+(end-start)/2;
while(start<=end){
if(ispossible(a,n,m,mid)){
ans=mid;
end=mid-1;
}
else{
    start=mid+1;
}
mid=start+(end-mid)/2;
}

return ans;
}

//MAIN FUNCTION

int main(){
int a[4]={10,20,30,40};
int answer=bookallowcation(a,4,2);
cout<<"Answer is : "<<answer;
}
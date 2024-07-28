#include<iostream>
using namespace std;

//FIND MOUNTAIN PEAK(MAXIMUM ELEMENT USING BINARY SEARCH ) INDEX//
//OF ARRAY//

int  mountainpeak(int a[],int n){
int start=0,end=n-1;
int mid=start+(end-start)/2;
while(start<end){
    if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
        return a[mid];
    }
    else if(a[mid]<a[mid+1] && a[mid]>a[mid-1]){
        start=mid+1;
    }
    else{
        start=mid=1;
    }
    mid=start+(end-start)/2;
}

}
int main(){
int n;
cout<<"Enter size of array : ";
cin>>n;
int a[n];
cout<<"Enter array elements : ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans= mountainpeak(a,n);
a[ans];
cout<<"Mountain peak is : "<<ans;
}
// second method more optimize


/*int  mountainpeak(int a[],int n){
int start=0,end=n-1;
int mid=start+(end-start)/2;
while(start<end){
if(a[mid]<a[mid+1]){
start=mid+1;
}
else{
    end=mid;

}
mid = start+(end-start)/2;
}
return start;
}


int main(){
int n;
cout<<"Enter size of array : ";
cin>>n;
int a[n];
cout<<"Enter array elements : ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
mountainpeak(a,n);
cout<<"Mountian peak is : "<<mountainpeak(a,n);
}*/



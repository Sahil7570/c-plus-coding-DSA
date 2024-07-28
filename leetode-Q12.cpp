#include<iostream>
using namespace std;

//TO FIND PERFECT SQUARE ROOT OF GIVER NUMBER//

int getsqrt(int n){
int start=0,end=n,mid=start+(end-start)/2;
int ans=0;
while(start<end){
    int sq=mid*mid;
if(sq==n){
    return mid;
}
else if(sq<n){
    ans=mid;
    start=mid+1;
}
else{
    end=mid-1;
}
mid=start+(end-start)/2;
}

}
double moreprecision(int n,int p,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(double i=0;i<p;i++){
        factor=factor/10;
         for(int j=ans;j*j<n;j=j+factor)
       ans=j; 
    
    }
    
   
    return ans;
}
int main(){
    int num;
    cout<<"Enter any Number : ";
    cin>>num;
    int temp=getsqrt(num);
    cout<<"Square root is : "<<moreprecision(num,3,temp)<<endl;
}

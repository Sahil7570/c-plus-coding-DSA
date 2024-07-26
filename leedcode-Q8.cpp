#include<iostream>
using namespace std;

//TO FIND TRIPLET WHOSE SUM IS EUQAL TO GIVEN NUMBER.
int triplet(int a[],int n){
    int s;
cout<<"Enter any Number : ";
cin>>s;
    int answer;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
if(a[i]+a[j]+a[k]==s){
   answer=a[i],a[j],a[k];
   }
        }
    }
}
return answer;
}
int main(){
int n;
cout<<"Enter size of Array : ";
cin>>n;
int a[n];
cout<<"Enter array Elements : ";
for(int i=0;i<n;i++){
    cin>>a[i];
}

int ans=triplet(a,n);
cout<<ans<<endl;

}
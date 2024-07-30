#include<iostream>
using namespace std;
int main(){
int a[5]={9,3,7,6,4};
int j;
for(int i=1;i<5;i++){
    int temp=a[i];
    
    for(j=i-1;j>=0;j--){
        if(a[j]>temp){
            a[j+1]=a[j];
        }
        else{
            break;
        }
    }
    a[j+1]=temp;
}
for(int i=0;i<5;i++){
    cout<<a[i];
}


}
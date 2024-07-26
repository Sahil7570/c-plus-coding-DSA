#include<iostream>
using namespace std;

int main(){
    int a1[5]={1,2,3,4,5};
    int b2[5]={6,7,8,9,10};
    for(int i=0;i<=5;i++){
for(int j=0;j<=5;j++){
    int temp=a1[i];
a1[i]=b2[i];
b2[i]=temp;
}
  }
    cout<<a1[5]<<b2[5]<<endl;
}
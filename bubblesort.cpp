#include<iostream>
using namespace std;
int main(){
int a[5]={8,3,4,9,2};
for(int i=0;i<5-1;i++){
    for(int j=0;j<5-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
for(int i=0;i<5;i++){
    cout<<a[i];
}
}
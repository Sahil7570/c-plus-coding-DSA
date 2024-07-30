#include<iostream>
using namespace std;
//SELECTION SORT

int main(){
    int a[5]={10,2,32,45,16};
    for(int i=0;i<5-1;i++){
int min=i;
for(int j=i+1;j<5;j++){
    if(a[j]<a[min]){
        min=j;
    }

}
swap(a[min],a[i]);
    }
    for(int i=0;i<5;i++){
cout<<a[i];
    }
}
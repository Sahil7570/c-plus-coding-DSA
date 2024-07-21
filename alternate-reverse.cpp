#include<iostream>
using namespace std;

void printarray(int arr[],int size){
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
void swapalternate(int arr[],int n){
for(int i=0;i<n;i+=2)
{
    if((i+1<n)){
  swap(arr[i],arr[i+1]);
   
    }
   cout<<endl;
     
    }
   
}
int main(){

int even[8]={12,13,46,34,52,68,46,85};
int odd[5]={54,63,78,90,34};

swapalternate(even,8);
swapalternate(odd,5);

printarray(even,8);
printarray(odd,5);



}
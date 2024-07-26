#include<iostream>
using namespace std;

//TO SORT AN ARRAY OF 0's and 1's//

void printarray(int a[],int n){
for(int i=0;i<=n;i++){
cout<<" "<<a[i];
}
}
void sortedarray(int a[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right){
        if( left<right){
            swap(a[left],a[right]);
            left++,right--;
        }
        while(a[left]==0 && left<right){
            left++;
        }
        while(a[right]==1 && left<right){
            right--;
        }
    }

}
    int main(){
 int a[8]={1,0,1,0,1,1,0,0};
 sortedarray(a,8);
 printarray(a,8);   
}

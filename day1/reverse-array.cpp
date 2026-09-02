#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,1,-20,500};
    int size=5;
    int end=size-1;
    int start=0;
    int temp;

    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
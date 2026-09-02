#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,1,-20,500};
    int size=5;
    int target;
    cout<<"Enter the target:";
    cin>>target;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout<<"Target Found!"<<endl;
            break;
        }

    }

    return 0;
}
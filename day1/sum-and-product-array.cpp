#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,1,1,1,1};
    int size=5;

    int sum=0;
    int product=1;

    for(int i=0; i<size; i++){
        sum=sum+arr[i];
        product=arr[i]*product;

    }

    cout<<"product: "<<product<<endl;
    cout<<"sum: "<<sum<<endl;

    return 0;
}
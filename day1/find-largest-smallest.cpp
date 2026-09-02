#include <iostream>
#include <climits> //used for thelimit of min max
using namespace std;

int main() {
    int arr[5] = {2,5,1,-20,500};
    int size=5;
    int largest = INT_MIN;
    int smallest = INT_MAX;

   


    for (int i=0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
            
        }
        if(arr[i]<smallest){
            smallest=arr[i];
          
        }
    }

    cout<<"largest: "<< largest <<endl;
    cout<<"smallest: "<< smallest <<endl;


    return 0;
}
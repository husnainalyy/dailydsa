#include <iostream>
#include <climits> //used for thelimit of min max
using namespace std;

int main() {
    int arr[8] = {4,2,2,4,3,4,5,4};
    int size=8;
    
    for (int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                cout << "Found duplicate: " << arr[i] << endl;
                
            }
            
        }
       
    }

    return 0;
}
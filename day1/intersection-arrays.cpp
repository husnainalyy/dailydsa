#include <iostream>
using namespace std;

int main() {
    int arri[8] = {4,2,2,4,3,4,5,4};
    int arrj[5] = {4,1,2,3,4};
    int sizei=8;
    int sizej=5;
    
    cout << "Intersection elements: ";
    for (int i=0; i<sizei; i++){
        cout << "check the " << arri[i] << " : "; 
        for(int j=0; j<sizej; j++){
            if(arr[i]==arr[j]){
                cout << arrj[j] << " ";
            }
            cout<<endl;
            
        }
       
    }

    return 0;
}
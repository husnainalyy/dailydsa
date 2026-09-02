#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,4,4};

    int target=7;
    for (int i: nums){
        if(i==target){
            cout<<"target found! "<<endl;
            break;
        }
    }
   

    return 0;
}

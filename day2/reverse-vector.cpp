#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,4,4};
    int x=0;
    int y=nums.size()-1;
    int temp=0;

    //reverse a vector
    for (int i: nums){
        if(x>y) break;
        temp=nums[x];
        nums[x]=nums[y];
        nums[y]=temp;
        x++;
        y--;
    }

    for(int i: nums){
        cout<<i<<" "<<endl;
    }
   

    return 0;
}

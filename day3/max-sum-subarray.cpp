#include <climits> //used for thelimit of min max
#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1,2,3,4,5};
  int size = 5;
  int max_sum = INT_MIN;

  for (int i = 0; i < size; i++) {
    int curt_sum=0;
    for (int j = i; j < size; j++) {
      curt_sum+=arr[j];
      max_sum=max(curt_sum,max_sum);
    }
  }

  cout<<"Maximum subarray sum is: "<<max_sum<<endl;

  return 0;
}
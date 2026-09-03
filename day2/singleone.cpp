#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1, 1, 2, 4, 4};

  int result = 0;
  for (int i : nums) {
    result = i ^ result;
  }
  cout << "single element: " << result << endl;

  return 0;
}

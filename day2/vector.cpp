#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vect = {1,2,4};

    for(int i : vect){
        cout<<"i: "<<i<<endl;
    }

    cout<<"size: "<< vect.size() << endl;
    cout<< "capcity: "<< vect.capacity() << endl;
    vect.push_back(5);
    cout<< "capcity: "<< vect.capacity() << endl;
    return 0;
}
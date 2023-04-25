#include <iostream>//this is an example of multisets
#include <set>

using namespace std;

int main() {
    multiset<int> mySet;//here is where we create a multiset

    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(5);

    for(auto itr = mySet.begin(); itr != mySet.end(); itr++) {
      // in this for loop it will iterate thorugh the for loop
        cout << *itr << " ";
    }

    return 0;
}


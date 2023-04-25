#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet;

    mySet.insert(5);   
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(5);//look what happens when we insert 5 a second time


    for(auto itr = mySet.begin(); itr != mySet.end(); itr++) {
        cout << *itr << " ";
    }

    return 0;
}


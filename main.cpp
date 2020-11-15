#include <iostream>
#include <forward_list>
#include "hashtable.hpp"
using namespace std;

int main() {
    HashTable<int,int> h1;
    cout << "insertion begins" << endl;
    h1.insert(1,3);
    cout << "insertion ends" << endl;
    cout << endl;
    cout << "insertion begins" << endl;
    h1.insert(1,5);
    cout << "insertion ends" << endl;
    cout << endl;
    cout << "insertion begins" << endl;
    h1.insert(11,4);
    cout << "insertion ends" << endl;
    cout << endl;
//    cout << h1.bucketSize() << endl;
    cout << "insertion begins" << endl;
    h1.insert(8,1);
    cout << "insertion ends" << endl;
    cout << endl;
    h1.erase(1);
    cout << h1.erase(7)<< endl;
    h1.insert(9,5);
    h1.insert(2,99);
    h1.insert(10,5);
    cout << h1.contains(10) <<endl;
    h1.insert(7,99);
    h1.insert(22,5);
    h1.insert(13,99);
    cout << h1[0] << endl;
    cout << h1[11] << endl;
    cout << h1[8] << endl;
    cout << h1[10] << endl;
    cout << "finished" << endl;
//    std::forward_list<int> test_list;
//    auto it = test_list.before_begin();
//    test_list.insert_after(it,10);
//    cout << test_list.empty() << endl;
//    it++;
//    cout << *it << endl;
    return 0;
}
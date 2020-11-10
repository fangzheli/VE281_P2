#include <iostream>
#include <forward_list>
#include "hashtable.hpp"
using namespace std;

int main() {
    HashTable<int,int> h1;
    h1.insert(1,3);
    h1.insert(1,5);
    std::forward_list<int> test_list;
    auto it = test_list.before_begin();
    test_list.insert_after(it,10);
    cout << test_list.empty() << endl;
    it++;
    cout << *it << endl;
    return 0;
}
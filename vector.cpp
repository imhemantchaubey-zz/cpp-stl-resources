#include <iostream>
#include <vector>

using namespace std;
int main(){

  vector<int> v;

  // size refers to the total memory size the vector takes
  cout << "Initial size of the vector: " << v.size() << endl;

  // capacity refers to the total capacity of the elements
  cout << "Initial capacity of the vector: " << v.capacity() << endl;

  v.push_back(1);
  cout << "Size after pushing an element: " << v.size() << endl;
  cout << "Capacity after pushing an element: " << v.capacity() << endl;

  v.push_back(2);
  cout << "Size after pushing two element: " << v.size() << endl;
  cout << "Capacity after pushing two element: " << v.capacity() << endl;

  v.push_back(3);
  // here, the capacity becomes 4 but the size remains 3 due to the definition of vector
  cout << "Size after pushing three element: " << v.size() << endl;
  cout << "Capacity after pushing three element: " << v.capacity() << endl;

  // accessing the vector elements using 'at'
  cout << "Element at the index 2: " << v.at(2) << endl;

  // accessing the first element of the vector
  cout << "First element: " << v.front() << endl;

  // accessing the last element of the vector
  cout << "Last element: " << v.back() << endl;

  // popping an element from the vector
  v.pop_back();
  // last element is 2, which verifies the popping of the last element
  cout << "Last element: " << v.back() << endl;

  // clearing the vector
  v.clear();
  cout << "Size after clearing: " << v.size() << endl;
  cout << "Capacity after clearing: " << v.capacity() << endl;
  // here, the size becomes 0 but the capacity remains 4

  // initializing a vector with a desired capacity and default values
  vector<int> a(5, 1);
  for(int i = 0; i < a.size(); i++){
    cout << "a[" << i <<"] = " << a.at(i) << endl;
  }

  // initializing a vector like an array
  vector<int> b{ 10, 20, 30 };
  for(int i = 0; i < b.size(); i++){
    cout << "b[" << i <<"] = " << b.at(i) << endl;
  }

  // copying a vector
  vector<int> c(v);
  for(int j: c){
    cout << j << endl;
  }
  
  return 0;
}
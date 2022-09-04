#include <iostream>
#include <array>

using namespace std;
int main(){

  // a basic array implementation
  int basic_array[4] = {1, 2, 3, 4};

  // a stl array
  array<int, 5> stl_array = {1, 2, 3, 4, 5};

  // size
  int size = stl_array.size();

  // printing the contents of the array
  for(int i=0; i<size; i++){
    cout << stl_array[i] << endl;
  }

  // accessing the array elements using 'at'
  cout << "Element at the index 2: " << stl_array.at(2) << endl;

  // accessing the first element of the array
  cout << "First element: " << stl_array.front() << endl;

  // accessing the last element of the array
  cout << "Last element: " << stl_array.back() << endl;


  return 0;
}
#include <iostream>
#include <deque>

using namespace std;
int main()
{

  deque<int> a;

  // pushing an element at the back
  a.push_back(1);
  a.push_back(3);

  // pushing an element to the front
  a.push_front(2);
  a.push_front(15);

  // printing all the elements of deque
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  // popping the back element
  a.pop_back();
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  // popping out the front element
  a.pop_front();
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  // deque uniform initializer
  deque<int> b{1, 2, 3, 4, 5};

  // deque list initializer
  deque<int> c = {1, 2, 3, 4, 5};

  // accessing a specific element
  cout << "Element at the index 1 of b: " << b.at(1) << endl;
  cout << "Element at the index 3 of c: " << c.at(3) << endl;

  // printing the front element
  cout << "Element at the front of b: " << b.front() << endl;

  // printing the back element
  cout << "Element at the back of c: " << c.back() << endl;

  // check empty or not
  cout << "IsEmpty?: " << b.empty() << endl;; // returns 0, since the b is not empty

  // erasing elements
  cout << "Before erase: " << b.size() << endl;
  b.erase(b.begin(), b.begin() + 1); // this will erase one element from the start
  cout << "After erase: " << b.size() << endl;
  for (int i : b)
  {
    cout << i << " ";
  } cout << endl;

  return 0;
}
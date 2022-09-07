#include <iostream>
#include <list>

using namespace std;
int main()
{

  // list initialization with default value and given size
  list<int> n(5, 100);
  cout << "n -> ";
  for (int i : n)
  {
    cout << i << " ";
  } cout << endl;

  // Before erase
  cout << "Before erase: n -> ";
  for (int i : n)
  {
    cout << i << " ";
  } cout << endl;

  n.erase(n.begin());

  // After erase
  cout << "After erase: n -> ";
  for (int i : n)
  {
    cout << i << " ";
  } cout << endl;

  list<int> l;

  // push an element at the back of the list
  l.push_back(15);
  l.push_back(112);
  l.push_back(148);

  // push an element to the front of the list
  l.push_front(21);
  l.push_front(89);
  l.push_front(26);
  l.push_front(22);

  // printing l
  cout << "l -> ";
  for (int i : l)
  {
    cout << i << " ";
  } cout << endl;

  // reversing a list
  l.reverse();
  cout << "l -> ";
  for (int i : l)
  {
    cout << i << " ";
  } cout << endl;

  //sorting a list
	l.sort();
  cout << "l -> ";
  for (int i : l)
  {
    cout << i << " ";
  } cout << endl;


}

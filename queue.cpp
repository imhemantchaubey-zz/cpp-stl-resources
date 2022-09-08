#include <iostream>
#include <queue>

using namespace std;
int main()
{
  // initializing a queue
  queue<string> q;

  // pushing an element at the back
  q.push("hemant");
  q.push("ram");
  q.push("shyam");
  q.push("krishna");
  q.push("arjun");
  q.push("karn");

  // popping an element from the front and printing the size
  cout << "Size before pop: " << q.size() << endl;
  cout << "Element at the front: " << q.front() << endl;
  cout << "Element at the back: " << q.back() << endl;
  q.pop();
  cout << "Element at the front after pop: " << q.front() << endl;
  cout << "Element at the back after pop: " << q.back() << endl;
  cout << "Size after pop: " << q.size() << endl;

  return 0;
}
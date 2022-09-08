#include <iostream>
#include <stack>

using namespace std;
int main()
{
  // stack initialization
  stack<string> s;

  // pushing an element on to the stack
  s.push("hemant");
  s.push("ram");
  s.push("shyam");
  s.push("krishna");
  s.push("arjun");
  s.push("karn");

  cout << "Element at the top: " << s.top() << endl;

  // popping an element from the stack
  s.pop();

  cout << "Element at the top after popping: " << s.top() << endl;

  // size of the stack
  cout << "Size of the stack: " << s.size() << endl;

  // is the stack empty
  cout << "isEmpty: " << s.empty() << endl;
}
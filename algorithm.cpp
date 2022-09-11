#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{

  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  cout << "vector v : ";
  for (int i : v)
  {
    cout << i << " ";
  } cout << endl;

  cout << "finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

  cout << "lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

  cout << "upper bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

  int a = 615;
  int b = 613;

  cout << "a -> " << a << endl;
  cout << "b -> " << b << endl;

  cout << "max -> " << max(a, b) << endl;

  cout << "min -> " << min(a, b) << endl;

  swap(a, b);
  cout << "a -> " << a << endl;
  cout << "b -> " << b << endl;

  string str = "helloworld";
  cout << "string -> " << str << endl;

  reverse(str.begin(), str.end());
  cout << "reversed string -> " << str << endl;

  rotate(v.begin(), v.begin() + 1, v.end());
  cout << "after rotate v : ";
  for (int i : v)
  {
    cout << i << " ";
  } cout << endl;

  sort(v.begin(), v.end());
  cout << "after sorting v : ";
  for (int i : v)
  {
    cout << i << " ";
  } cout << endl;

  return 0;
}

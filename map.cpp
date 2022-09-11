#include <iostream>
#include <map>

using namespace std;
int main()
{

  map<int, string> m;

  m[16] = "hemant";
  m[17] = "namrata";
  m[9] = "nandani";
  m[28] = "anjali";

  m.insert({5, "bheem"});

  cout << "The map m: " << endl;
  for (auto i : m)
  {
    cout << "dob: " << i.first << ", name: " << i.second << endl;
  } cout << endl;

  cout << "finding -13 -> " << m.count(-13) << endl << endl;

  m.erase(5);

  cout << "The map m now: " << endl;
  for (auto i : m)
  {
    cout << "dob: " << i.first << ", name: " << i.second << endl;
  } cout << endl;

  auto it = m.find(16);

  for (auto i = it; i != m.end(); i++)
  {
    cout << "dob: " << (*i).first << endl;
  }
}
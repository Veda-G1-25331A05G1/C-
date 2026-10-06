#include <iostream>
#include <map>
using namespace std;
int main()
{
 map<int, string> m;
  // 1. insert() - Inserts key-value pairs
 m.insert({101, "Landa"});
 m.insert({102, "Veda"});
 m.insert({103, ""});
 cout << "Map elements:\n";
for(auto it = m.begin(); it != m.end(); ++it)
 {
 cout << it->first << " - " << it->second << endl;
 }
 // 2. find() - Searches for a key
 auto it = m.find(102);
 if(it != m.end())
 {
 cout << "\nKey 102 found: " << it->second << endl;
 }
 else
 {
 cout << "\nKey not found" << endl;
 }
 // 3. erase() - Removes an element by key
 m.erase(101);
 cout << "\nAfter erase(101):\n";
 for(auto it = m.begin(); it != m.end(); ++it)
 {
 cout << it->first << " - " << it->second << endl;
 }
 // 4. size() - Returns number of elements
 cout << "\nNumber of elements: " << m.size() << endl;
 // 5. empty() - Checks if map is empty
 if(m.empty())
 {
 cout << "Map is empty" << endl;
 }
 else
 {
 cout << "Map is not empty" << endl;
 }
 // 6. clear() - Removes all elements
 m.clear();
 cout << "\nAfter clear():" << endl;
 if(m.empty())
 {
 cout << "Map is empty" << endl;
 }
 return 0;
}

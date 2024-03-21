#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
   list<int>::iterator it;
   list<int> l={1,2,3,4};
   it=l.begin();
   advance(it,2);
   l.insert(it,5);



   for(auto x:l) cout<< x <<" ";
   cout << endl;




    return 0;
}

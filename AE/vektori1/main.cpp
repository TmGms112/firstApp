#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> lista={1,2,3,4};
    list<int>::iterator it;
    it=next(lista.begin(),2);


    for(auto el:lista) cout<<el<<" ";

    lista.insert(it,5);

    advance(it,1);
    cout<<"Cetvrti element je " << *it <<endl;


    for(auto el:lista) cout<<el<<" ";

    return 0;
}

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista = {1, 2, 3, 4};
    /*lista.push_front(1);//dodaj na poèetak
    lista.push_back(4);//dodaj na kraj
    lista.reverse();//obrni redosljed
    lista.sort();//sortiraj*/

    //for (int i = 0; i<lista.size; i++)
    list<int> ::iterator it; //deklaracija iteratora
    it = lista.begin(); // stavimo it na poèetak liste
    it = next(it,3); // maknemo za 3 puta

// moglo se i it = next(lista.begin(),2);(2, ne 3 polja jer broji prvi?)

lista.insert(it, 5);// ne možemo sa begin ()+x jer to je samo za vektore i polja, upišemo 5

    for (auto el:lista) cout << el << " ";

// za ispitati 4. element liste moramo opet iterirati
it = lista.begin(); //postavljanje it na 0
advance(it,3); // pomaknuo ga je za 4 mjesta
cout << *it; // trebazvjezdica prije it -> &x - referenciranje; *x je dereferenciranje, tj sadržaj tog mjesta
    return 0;
}

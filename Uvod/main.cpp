#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*1
    //delklaracija strukture vektora: vector <tip>
    vector<int> v1 {1,2,3,4,5};
//slièno kao polje, èak ne moraš = pisat
v1.insert(v1.begin(), 0);//v1.begin je prva pozicija liste/polja
        v1.push_back(6);
        // može se push back i v1.insert(v1.begin()+v1.size(), 6) ili v1.end();
        v1.insert(v1.begin()+3, 9); //ova notacija radi samo za vektore
    for (int i = 0; i<v1.size(); i++){
        cout << v1.at(i) << " ";
        //v1.at je isto kao []
        //postoji još jednostavniji ispis: for(int el: v1) cout << e1<<" ":
        //metoda iznad samo ispisuje SVE elemente; intmožemo zamijeniti s auto; govori nam kakve su elemente u v1

        //broji koliko elemenata je zapisano (kao u polju, ali bolje jer to ne možeš u polju) v1.size()

      //begin i end su mjesta, front i back su pozicije

    }
    cout << "Prvi element je ";
    cout << v1[0] << " " << v1.front() << v1.at(0);
    cout << "Posljednji element je ";
    cout << v1[0] << " " << v1.back()<< " " << v1.at(v1.size()-1);*/


/*2
    vector<char> v1{'a', 'b', 'c', 'd'};

    //for (int i = 0; i<v1.size(); i++) if (v1[i]=='c') v1[i]'f'; // prepisi ostalo



    for (auto el:v1){ // U ovom sluèaju ne ide element jer jeelement privremena varijaba. Bolje je v1[i]
            //ako radimo s auto, onda treba dodati brojac
        if (el == 'c') el = 'f';
    }
    for (auto ele:v1) cout << el<< " ";*/


    /*3
    vector <string> v1{"pon", "uto", "sri", "sub","cet", "pet"};
    v1.pop_back(); // može i v1.erase(v1.end());
    //v1.erase(v1.begin()+3);
    for (int i = 0; i<v1.size(); i++) {if (v1.at(i)=="sub") {v1.erase(v1.begin()+i);}}
    for (auto el:v1) cout << el << " ";*/
    return 0;
}

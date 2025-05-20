#include <bits/stdc++.h>

using namespace std;

class Osoba{
public:
int wiek;
string imie;
Osoba(int wiek, string imie){
    this->wiek = wiek;
    this->imie = imie;
}
void wypisz(){
    cout << wiek << " " << imie << endl;
}
bool operator < (Osoba &a){
    if(wiek != a.wiek){
        return wiek < a.wiek;
    } else{
        return imie < a.imie;
    }
}
};

int main(){

    Osoba a(13, "Heniek");
    Osoba b(16, "Patryk");
    Osoba c(16, "Anastazy");

    vector<Osoba> osoby;
    osoby.push_back(a);
    osoby.push_back(b);
    osoby.push_back(c);

    sort(osoby.begin(), osoby.end());

    for(auto O : osoby){
        O.wypisz();
    }

    return 0;
}
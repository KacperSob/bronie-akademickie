#include "herm-sql.h"

using namespace std;

void Ksiazka::ustawLiczbeStron(int liczbaStron){
    this->liczbaStron = liczbaStron;
}

int getLiczbaStron(Ksiazka k){
    return k.liczbaStron;
}

int main(){

    Ksiazka k;
    k.ustawLiczbeStron(15);
    cout << getLiczbaStron(k);
    return 0;
}
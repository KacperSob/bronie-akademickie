#include <bits/stdc++.h>

using namespace std;

class Pojazd{
int speed;
string nazwa;
public:
Pojazd(int speed, string nazwa);
int getSpeed();

};

Pojazd::Pojazd(int speed, string nazwa){
    this->speed = speed;
    this->nazwa = nazwa;
}

int Pojazd::getSpeed(){
    return speed;  
}

class Samochod : public Pojazd{
int iloscKol;
public:
    Samochod(int speed, string nazwa, int iloscKol) : Pojazd(speed, nazwa){
        this->iloscKol = iloscKol;
    }

    void wyswietlDane(){
        cout << iloscKol << " " << Pojazd::getSpeed();
    }
};

int main(){
    Pojazd p(15,"Mustang");
    Samochod s(250, "Corvette", 4);
    s.wyswietlDane();
    return 0;
}
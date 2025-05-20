#include <bits/stdc++.h>

using namespace std;

class Uzytkownik{
string nazwa;
int wiek;
public:
Uzytkownik(){}
Uzytkownik(int wiek){
    if(wiek > 150) this->wiek = 0;
    else this->wiek = wiek;
}
void setImie(string imie){
    nazwa = imie;
}
string getImie(){
    return nazwa;
}

bool setWiek(int wiek){
    if(wiek <= 150){
        this->wiek = wiek;
        return true;
    }
    cout << "\nZLY WIEK\n";
    return false;
}
int getWiek(){
    return wiek;
}
};

int main(){
    int wiek;
    bool ret;
    cout << "Podaj wiek\n";
    cin >> wiek;

    Uzytkownik uzyt1(wiek);

    ret = uzyt1.setWiek(wiek);

    while(ret == false){
        cin >> wiek;
        ret = uzyt1.setWiek(wiek);
    }

    cout << uzyt1.getWiek();

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

class Baza{
public:

/*
virtual string func(){
    return "cos\n";
}
*/
virtual string func() = 0;
};
class Dziecko1 : public Baza{
public:
string func(){
    return "dzecko1\n";
}
};
class Dziecko2 : public Baza{
public:
string func(){
    return "dzecko2\n";
}
};



int main(){
    Baza *p[2];
    Dziecko1 d1;
    Dziecko2 d2;
    p[0] = &d1;
    p[1] = &d2;

    for(Baza* d : p){
        cout << d->func() << endl;
    }

    return 0;
}
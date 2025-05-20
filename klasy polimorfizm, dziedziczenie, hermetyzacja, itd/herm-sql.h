#include <bits/stdc++.h>

class Ksiazka{
int liczbaStron;
std::string nazwa;
public:
void ustawLiczbeStron(int liczbaStron); //setter
friend int getLiczbaStron(Ksiazka k);
};
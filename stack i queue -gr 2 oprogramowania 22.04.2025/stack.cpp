#include <iostream>

using namespace std;

#define MAX_SIZE 50

class stack{
private:

int dane[MAX_SIZE];
int rozmiar = 0;
public:

int getLast(){
    if(rozmiar > 0){
        return dane[rozmiar-1];
    } else {
        cout << "Pusty stack\n";
    }
}

void push(int data){
    if(rozmiar < MAX_SIZE){
        dane[rozmiar] = data;
        rozmiar++;
    } else {
        cout << "Pelny stack\n";
    }
}

void pop(){
    if(rozmiar > 0){
        dane[rozmiar-1] = 0;
        rozmiar--;
    } else {
        cout << "Pusty stack\n";
    }
}
void print(char rozdzielnik){
    for(int i = rozmiar-1; i >= 0; i--){
        cout << dane[i] << rozdzielnik;
    }
}
};

int main(){
    stack stos;
    stos.push(2);
    stos.push(5);
    stos.push(7);
    stos.push(13);
    stos.pop();
    stos.print(' ');   

    return 0;    
}
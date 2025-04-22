#include <iostream>

using namespace std;

#define MAX_SIZE 50

class queue{
private:

int dane[MAX_SIZE];
int rozmiar = 0;
public:

int getFirst(){
    if(rozmiar > 0){
        return dane[0];
    } else {
        cout << "Pusta kolejka\n";
    }
}

void push(int data){
    if(rozmiar < MAX_SIZE){
        dane[rozmiar] = data;
        rozmiar++;
    } else {
        cout << "Pelna kolejka\n";
    }
}

void pop(){
    if(rozmiar > 0){
        for(int i = 0; i < rozmiar-1; i++){
            swap(dane[i], dane[i+1]);
        }
        dane[rozmiar-1] = 0;
        rozmiar--;
    } else {
        cout << "Pusta kolejka\n";
    }
}
void print(char rozdzielnik){
    for(int i = 0; i < rozmiar; i++){
        cout << dane[i] << rozdzielnik;
    }
}
};

int main(){
    queue kolejka;
    kolejka.push(7);
    kolejka.push(1);
    kolejka.push(5);
    kolejka.push(2);
    kolejka.pop();
    kolejka.print(' ');
    return 0;    
}
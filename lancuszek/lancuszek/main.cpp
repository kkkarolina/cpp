//https://main2.edu.pl/c/konkurs-wstepu-do-programowania/p/lan/
#include <iostream>
using namespace std;
int nr_tel, rok;
int main(){
    
    cout << "Podaj swoj numer telefonu oraz rok urodzenia: ";
    cin >> nr_tel >> rok;
    nr_tel %= 10;
    nr_tel *= 2;
    nr_tel += 5;
    nr_tel *= 50;
    nr_tel += 1764;
    nr_tel -= rok;
    cout << nr_tel ;
    
    return 0;
}

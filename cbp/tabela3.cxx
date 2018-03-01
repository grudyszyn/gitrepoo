#include <iostream>

using namespace std;

using namespace std;

void pobierzliczby(int tab[], int ile){
    int i = 0;
    for (i = 0; i < ile; i++) {
        cout << "Podaj liczbe: ";
        cin >> tab[i];
    }
}
void sumuj (int liczby[], int ilosc) {
    int i;
    int suma = 0;
    for (i = 0; i < ilosc; i++) {
        suma+= liczby[i];
    }
    
    cout << "suma liczb: " << suma <<endl;    
    }
    int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << " ile liczb podasz: ";
    cin >> rozmiar;
    int liczby[rozmiar];
    
    pobierzliczby(liczby, rozmiar);
    
    sumuj(liczby, rozmiar);
	return 0;
}

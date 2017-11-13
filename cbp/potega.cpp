/*
 * potega.cpp
 * a0=1
 * a1 = a
 * 
 */


#include <iostream>

using namespace std;

float potega_it(float x, int n) {
    float wynik = 1;
    for (int i=1 ;i<=n ;i++ ) {
        //testuję ilośc powtórzeń pętli
        wynik = wynik * x;
        
    }
    return wynik;
    }
    
        
int main(int argc, char **argv)
{ 
    int n;
    float x;
    cout << "Podaj podstawę potęgi: " << endl;
    cin >> x;
    cout << "Podaj wykładnik potęgi: " << endl;
    cin >> n;
 	//pobierz od uzytkownika podstawę i wykładnik
	cout << "Potęga: " << potega_it(x, n) << endl;
    return 0;
    
}


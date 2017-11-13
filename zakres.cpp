/*
 * 12345.cxx
 * 
 * 
 * 
 * 
 */


#include <iostream>


using namespace std;
int liczba,krok; //zmienne lokalne 
void zwieksz ()
{
liczba = liczba + krok;



}


int main(int argc, char **argv)
{
    // int liczba, krok; // zmienne lokalne
    cout << "podaj liczby i krok: " ;
    cin >> liczba >> krok;
    
    cout << "liczba i krok: " << liczba << " " << krok <<endl;
    zwieksz ();
    cout << "LIczba i krok: " << liczba << " " << krok << endl;
    return 0;
    
    
}


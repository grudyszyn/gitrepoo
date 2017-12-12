/*
 * rudyszyn_ulamek.cpp
 * 
 * Copyright 2017  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>

using namespace std;

int main( int argc, char * argv[] )
{ //Program skracający ułamki zwykłe
   
    int a, b;
    int mianownik = b;
    int licznik = a;
    cout << "Podaj licznik: " << endl;
    cin >> a;
    cout << "Podaj mianownik: " << endl;
    cin >> b;
    if( a != b )
    if( a > b ) { { cout << "NWD= ";
            while( a > b ) {
                a = a - b;
            } }
        cout << a << endl;
    } else {
        cout << "NWD= ";
        while( b > a ) {
            b = b - a; }
        cout << b << endl; }
    licznik = licznik / a;
    mianownik = mianownik / a;
    cout << licznik << "/" << mianownik << endl;
   
   
    system( "PAUSE" );
    return EXIT_SUCCESS;
}



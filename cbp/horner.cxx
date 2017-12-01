/*
 * horner.cxx
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
 
float horner_it(int k, float tbwsp[], float x) {
    int i;
    float  wynik = tbwsp[0];
    for (i =1; i < k + 1; i++) {
        wynik = wynik*x + tbwsp[i];
    }} 


int main(int argc, char **argv)
{
    int stopien = 3;
    float x;
    float tbwsp[4];
    cout <<"Podaj wartosc x: " << endl;
    cin >> x;
    for(int i = 0; i < 4; i++)
    {
     cout << "Podaj współczynnik: " << endl;
     cin >> tbwsp[i];
        
    }
    cout <<horner_it(stopien, tbwsp,x)<< endl;
    
    return 0;
}


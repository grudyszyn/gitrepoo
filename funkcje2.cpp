/*
 * 12345.cxx
 * 
 * 
 * 
 * 
 */


#include <iostream>

using namespace std;
int sumuj (int a, int b)
{
    return a + b ;
}

int odejmij (int a, int b ) 
{
    return a - b ;
}

int iloraz (int a, int b ) 
{
    return a*b ;
}
int iloczyn (int a, int b ) 
{
    return a/b ;
}


int main(int argc, char **argv)
{
    int a, b;
    cout << "podaj liczby: " ;
    cin >> a >> b ;
    
    int sumuj = suma (a,b);
    int roznica = odejmij (a,b)
    
    cout << "suma: " << suma (a,b) <<endl;
    cout << "roznica: " << roznica (a,b) <<endl;
    return 0;
}


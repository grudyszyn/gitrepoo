#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

def potega_it(x, n):

    i = 1
    wynik = 1
    while i <= n:
        wynik = wynik * x
        i = i + 1

    return wynik

def potega_rek(a, n):
    if x == 0:
        return 0
    elif n == 0:
        return 1
        return potega_rek(x, n-1)* x




def main(args):
    x = float(input("Podaj podstawe potęgi: "))
    n = int(input("Podaj wykładnik potęgi: "))
    print('Wynik: ', potega_it(x, n))
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))

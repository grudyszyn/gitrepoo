#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random


def losuj(ileliczb, maksliczb):

    liczby = []  # pusta lista

    ile = 0  # ilość unikalnych liczb

    # for i in range(ileliczb):
    while ile < ileliczb:
        liczba = random.randint(0, maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1

    print(liczby)
    return liczby


def minimum(lista):
    # wyszukiwanie minimum
    min = lista[0]
    for i, el in enumerate(lista):
         if el < min:
            min = el
    return min

def maximum(lista):
    # wyszukiwanie maximum
    max = lista[0]
    for i, el in enumerate(lista):
        if el > max:
            max = el
    return max
    
    
def main(args):
    lista = losuj(20, 50)
    assert minimum([7, 9, 3, 6]) ==3
    assert maksimum([9, 1, 5, 6]) ==9
    print("Min: ", minimum(lista))
    print("Max: ", maximum(lista))
    return 0


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))

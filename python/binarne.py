#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import floor


def wyszuk_liniowe(lista, el):
    for i in range(0, len(lista)):
        if lista[i] == el:
            return i


def wyszukiwanie_bin_iter(l, e):
    lewy, prawy = 0, len(l) - 1
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)
        if e <= l[srodek]:
            prawy = srodek
        else:
            lewy = srodek + 1

    if l[lewy] == e:
        return lewy  # element znaleziono

    return -1  # elementu nie znaleziono

def szukaj_bin(lewy, prawy, lista, el):
    

def wyszukiwanie_bin_rek(lewy, prawy, lista, el):

    if lewy > prawy:
        return -1  # elementu nie znaleziono

    srodek = floor((lewy + prawy) / 2)
    if el == lista[srodek]:
        return srodek  # element znaleziono

    if el < lista[srodek]:
        return wyszukiwanie_bin_rek(lewy, srodek - 1, lista, el)
    else:
        return wyszukiwanie_bin_rek(srodek + 1, prawy, lista, el)

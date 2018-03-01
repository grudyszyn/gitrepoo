#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sortowani.py
#  
#  Copyright 2017  <>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  


from random import randint


def wypelnij(lista, ile, maks):
    for i in range(ile):
         lista.append(randint(0, maks))
    return lista
    
    
def sort_wyb(lista):
    for i in range(len(list)):
        k = i
        for j in range(i + 1, len(lista)):
            if lista[j] < lista[k]:
                k = j
        lista[i], lista[k] = lista[k], lista[i]
    return lista

def main(args):
    lista = []
    print(wypelnij(lista, 10, 20))
    print( sort_wyb(lista))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

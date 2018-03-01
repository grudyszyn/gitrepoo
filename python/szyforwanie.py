#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):

    szyfrogram = szyfruj_cezar(tekst, klucz)
    print(szyfrogram)
    print(deszyfruj(szyfrogram, klucz))
return 0



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

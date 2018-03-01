#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# ciag_fibonacciego.py

def fib_iter(n):
    a, b = (0, 1)
    for i in range(1, n - 1):
        a = b
        b = a + b
        if n > 0:
            return b
        else:
            return a

#fib_rek(n) dla n = {0, 1}
#fib_rek(n) = fib_rek(n-1) + fib_rek(n-2) dla n > 1

def fib_rek(n):
    if n < 2:
        return 1

def main(args):
    n = int(input("Numer wyrazu w ciągu: "))
    assert fib_iter(0) == 0
    assert fib_iter(1) == 1
    assert fib_iter(2) == 1
    assert fib_iter(3) == 2
    assert fib_iter(4) == 3
    assert fib_iter(5) == 5
    print("Wyraz {:d} = {:d}".format(n, fib_iter(n)))
    return 0


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))

#!/usr/bin/env python
# -*- coding: utf-8 -*-

def ciag(n):
	 if n == 1:
	 		return 2
	 		return ciag(n-1) * ciag(n * n + 1)




def main(args):

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

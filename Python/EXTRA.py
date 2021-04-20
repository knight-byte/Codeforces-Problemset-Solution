'''
Author     : knight_byte
File       : EXTRA.py
Created on : 2021-04-19 15:10:03
'''

import math


# ----Check PRIME NO. ------
def prime(n):
    if n <= 1:
        return False
    max_div = math.floor(math.sqrt(n))
    for i in range(2, 1 + max_div):
        if n % i == 0:
            return False
    return True


# ------ Find GCD --------
def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)


# ------find LCM-------
def lcm(a, b):
    return (a / gcd(a, b)) * b


# ---- check PERFECT SQUARE -------
def psq(a):
    if a >= 0:
        sq = int(math.sqrt(a))
        return sq*sq == a
    else:
        return False

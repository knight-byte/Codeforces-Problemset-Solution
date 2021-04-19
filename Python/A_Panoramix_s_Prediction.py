'''
Author     : knight_byte
File       : A_Panoramix_s_Prediction.py
Created on : 2021-04-19 15:00:28
'''
import math


def is_prime(n):
    if n <= 1:
        return False
    max_div = math.floor(math.sqrt(n))
    for i in range(2, 1 + max_div):
        if n % i == 0:
            return False
    return True


def main():
    a, b = map(int, input().split())

    if not is_prime(a) or not is_prime(b):
        print("NO")
    else:
        for i in range(a+1, b+1):
            if is_prime(i) and i == b:
                print("YES")
                break
            elif is_prime(i) and i != b:
                print("NO")
                break


if __name__ == '__main__':
    main()

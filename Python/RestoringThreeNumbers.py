import math


def main():
    l = sorted(list(map(int, input().split())))
    p, q, r, s = map(int, l)
    b = math.ceil((r - q + p)/2)
    a = p - b
    c = q - (p - b)
    print(a, b, c)


if __name__ == '__main__':
    main()


'''
-- logic --
p = a + b  =>  a = p - b
q = a + c  =>  c = q - ( p - b )
r = b + c  =>  c = r - b

r - b =  q - p + b 
2b = r - q + p

b = ( r - q + p )/2 
a = p - b
c = r - b 

s = a + b + c

'''

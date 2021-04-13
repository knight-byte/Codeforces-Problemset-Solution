def compare(x, y):
    if x == y:
        return 0
    elif x > y:
        return 1
    else:
        return -1


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        r = list(map(int, list(input())))
        b = list(map(int, list(input())))
        arr = [compare(r[i], b[i]) for i in range(n)]
        sum_arr = sum(arr)
        if sum_arr == 0:
            print("EQUAL")
        elif sum_arr > 0:
            print("RED")
        else:
            print("BLUE")


if __name__ == '__main__':
    main()

"""

1 0 8 3 8 9 1 3 9 9 
3 9 8 5 8 6 1 3 1 3

b b 0 b 0 r 0 0 r r

"""

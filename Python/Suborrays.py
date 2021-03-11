from random import randint


def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        extra_arr = []
        a = []
        for i in range(n):
            x = 0
            # getting the random
            while x == 0 or x in extra_arr:
                x = randint(1, n)
            a.append(x)

        for i in a:
            print(i)


if __name__ == '__main__':
    main()

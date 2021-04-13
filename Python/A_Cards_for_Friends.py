def main():
    w, h, n = map(int, input().split())
    count = 1
    while w > 1 or h > 1:
        if count >= n or (w % 2 != 0 and h % 2 != 0):
            break
        elif w % 2 == 0 and h % 2 == 0:
            if w >= h:
                w = (w//2)
            else:
                h = (h//2)
            count *= 2
        elif w % 2 == 0:
            w = (w//2)
            count *= 2

        elif h % 2 == 0:
            h = (h//2)
            count *= 2

    if count >= n:
        print("YES")
    else:
        print("NO")


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()

'''
1 2 3 4 5 6 7 8                         = 1
1 2 3 4         5 6 7 8                 = 2
1 2 3 4         5 6        7 8          = 4
1 2 3 4         5 6        7         8  = 8


1 2 3 4 5 6 7 8 9 10 11 12              = 1
1 2 3 4 5 6      7 8 9 10 11 12         = 2
1 2 3 4 5 6      7 8 9      10 11 12    = 4 
'''

def main():
    t = int(input())
    for _ in range(t):
        w, h, n = map(int, input().split())
        count = 0
        while (w > 0 and h > 0) and (w % 2 == 0 or h % 2 == 0):
            if count*2 >= n:
                break
            if w % 2 == 0 and h % 2 == 0:
                if w >= h:
                    w = (w//2)
                else:
                    h = (h//2)
                count += 1
            elif w % 2 == 0:
                w = (w//2)
                count += 1

            elif h % 2 == 0:
                h = (h//2)
                count += 1

        print(count*2, w, h)
        if count * 2 >= n  == 1 and :
            print("YES")

        else:
            print("NO")


if __name__ == '__main__':
    main()

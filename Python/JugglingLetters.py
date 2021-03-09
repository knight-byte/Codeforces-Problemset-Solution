def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        for i in range(n):
            s = input()
            a = [0 for i in range(26)]
            for j in s:
                a[ord(j)-ord('a')] += 1
        ans = True
        for i in range(n):
            if a[i] % n != 0:
                ans = False
                break
        if ans:
            print("YES")
        else:
            print("NO")


if __name__ == '__main__':
    main()

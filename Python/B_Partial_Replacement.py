def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        s = list(input())
        i = 0
        while i < n:
            if s[i] == "*":
                s[i] = "x"

                for j in range(k, 0, -1):
                    try:
                        if s[i+j] == "*":
                            i += j
                            break
                    except IndexError:
                        continue
            else:
                i += 1
        print(s.count("x"))


if __name__ == '__main__':
    main()

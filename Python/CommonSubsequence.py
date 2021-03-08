def main():
    t = int(input())
    n = 0
    m = 0
    b = 0
    N = 1005
    a = [0 for i in range(N)]
    vis = [0 for i in range(N)]
    while t:
        t -= 1
        n = int(input())
        m = int(input())
        for i in range(n):
            a[i] = int(input())
            vis[a[i]] = True
        e = -1
        for i in range(m):
            b = int(input())
            if vis[b]:
                e = b
            for i in range(n):
                vis[a[i]] = False
            if e == -1:
                print("NO")
            else:
                print(f"YES\n1 {e}")


if __name__ == '__main__':
    main()

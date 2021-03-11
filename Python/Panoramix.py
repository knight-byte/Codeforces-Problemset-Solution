
def prime(x):
    if x <= 1:
        return False
    else:
        for i in range(2, x):
            if x % i == 0:
                return False
        return True


def main():
    n = int(input())
    m = int(input())
    ans = False
    for i in range(n+1, m+1):
        if prime(i):
            if i == m:
                ans = True
            else:
                ans = False
                break
        else:
            ans = False
    if ans:
        print("YES")
    else:
        print("NO")


if __name__ == '__main__':
    main()

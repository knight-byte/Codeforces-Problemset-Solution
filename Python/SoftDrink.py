def main():
    n = int(input())
    k = int(input())
    l = int(input())
    c = int(input())
    d = int(input())
    p = int(input())
    nl = int(input())
    np = int(input())
    drink = (k*l)/nl
    limes = c*d
    salt = p/np
    ans = [drink, limes, salt]
    result = min(ans)
    print(result)


if __name__ == '__main__':
    main()

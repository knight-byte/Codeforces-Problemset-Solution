def main():
    n, k, l, c, d, p, nl, np = map(int, input().split())
    total_ml = k*l/nl
    total_lime = c*d
    print(int(min(total_ml, total_lime, p/np)/n))


if __name__ == '__main__':
    main()

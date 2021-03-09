def main():
    d1 = int(input())
    d2 = int(input())
    d3 = int(input())
    dist = min(d1, d3+d2) + min(d2, d1+d3) + min(d3, d1+d2)
    print(dist)


if __name__ == '__main__':
    main()

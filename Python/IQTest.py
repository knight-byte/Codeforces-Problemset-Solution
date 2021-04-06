def main():
    n = int(input())
    x = set(map(int, input().split()))
    even_odd = [1 if i % 2 == 0 else 0 for i in x]
    print(even_odd.count(1), even_odd.count(0))


if __name__ == '__main__':
    main()

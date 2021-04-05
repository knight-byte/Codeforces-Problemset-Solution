def main():
    stops = int(input())
    total_pass = 0
    max_pass = 0
    for _ in range(stops):
        a, b = map(int, input().split())
        total_pass -= a
        total_pass += b
        max_pass = max(max_pass, total_pass)

    print(max_pass)


if __name__ == '__main__':
    main()

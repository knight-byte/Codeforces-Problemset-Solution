def main():
    amt = int(input())
    count = 0
    bills = [100, 20, 10, 5, 1]
    for bill in bills:
        if amt >= bill:
            count += amt//bill
            amt %= bill

    print(count)


if __name__ == '__main__':
    main()

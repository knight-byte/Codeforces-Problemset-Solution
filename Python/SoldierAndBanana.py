def main():
    price = int(input())
    money = int(input())
    quantity = int(input())
    totalAmount = 0
    for i in range(1, quantity+1):
        totalAmount += i*price
    if totalAmount <= money:
        print(0)
    else:
        print(totalAmount-money)


if __name__ == '__main__':
    main()

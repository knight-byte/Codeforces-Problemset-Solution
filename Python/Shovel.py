def main():
    price = int(input())
    denomination = int(input())
    for x in range(1, 10):
        if price*x % 10 == 0 or price*x % 10 == denomination:
            print(x)
            break


if __name__ == '__main__':
    main()

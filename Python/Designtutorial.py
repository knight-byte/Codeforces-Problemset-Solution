def main():
    num = int(input())
    res = []
    if num % 2 == 0:
        res.append(8)
        res.append(num-8)
    else:
        res.append(9)
        res.append(num-9)

    for i in res:
        print(i)


if __name__ == "__main__":
    main()

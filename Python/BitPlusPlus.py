def main():
    x = int(input())
    statement = [input() for i in range(x)]
    result = 0
    for i in range(len(statement)):
        if (i == "X++") or (i == "++X"):
            result += 1
        elif (i == "X++") or (i == "++X"):
            result -= 1
    print(result)


if __name__ == "__main__":
    main()

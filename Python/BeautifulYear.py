def main():
    year = int(input())
    for i in range(year+1, 9002):
        x = tuple(str(i))
        if len(x) == len(set(x)):
            print("".join(x))
            break
    else:
        print("9012")


if __name__ == '__main__':
    main()

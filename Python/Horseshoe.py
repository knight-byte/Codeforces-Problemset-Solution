def main():
    num = 4
    arr = [int(input()) for i in range(num)]
    tiger = set(arr)
    print(num-len(tiger))


if __name__ == "__main__":
    main()

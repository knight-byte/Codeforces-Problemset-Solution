def main():
    val = {"1": 0, "2": 0, "3": 0, "4": 0}
    val["1"], val["2"], val["3"], val["4"] = map(int, input().split())
    s = input()
    sum = 0
    for i in s:
        sum += val[i]
    print(sum)


if __name__ == '__main__':
    main()

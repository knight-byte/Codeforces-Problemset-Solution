def main():
    v = []
    x = int(input())
    while x:
        v.append(x)
        x = int(input())

    v = sorted(v)
    answer = (v[1] - v[0]) + (v[2] - v[1])
    print(answer)


if __name__ == '__main__':
    main()

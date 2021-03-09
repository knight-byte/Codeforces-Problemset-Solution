def main():
    t = int(input())
    while t:
        t -= 1
        h = int(input())
        m = int(input())
        res = 0
        res = (23-h)*60 + (60-m)
        print(res)


if __name__ == '__main__':
    main()

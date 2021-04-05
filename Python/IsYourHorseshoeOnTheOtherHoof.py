def main():
    li = tuple(map(int, input().split()))
    print(4-len(set(li)))


if __name__ == '__main__':
    main()

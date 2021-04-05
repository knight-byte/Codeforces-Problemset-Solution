def main():
    mat = list(map(int, input().split("+")))
    mat = sorted(mat)
    print("+".join(map(str, mat)))


if __name__ == '__main__':
    main()

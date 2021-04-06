def main():
    string = ["."+i for i in input().lower() if i not in "aoyeui"]
    print("".join(string))


if __name__ == '__main__':
    main()

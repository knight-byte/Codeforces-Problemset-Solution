def main():
    name = input()
    ans = "IGNORE HIM!" if len(set(name)) % 2 != 0 else "CHAT WITH HER!"
    print(ans)


if __name__ == '__main__':
    main()

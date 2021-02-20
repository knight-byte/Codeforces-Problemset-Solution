def main():
    male = "IGNORE HIM!\n"
    female = "CHAT WITH HER\n"
    username = input()
    s1 = {i for i in username}
    print(female if len(s1) % 2 == 0 else male)


if __name__ == "__main__":
    main()

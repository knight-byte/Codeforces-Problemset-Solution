def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        if n <= 30:
            print("NO")
        else:
            if n == 36 or n == 40 or n == 44:
                print(f"YES\n6 10 15 {n-31}")
            else:
                print(f"YES\n6 10 14 {n-30}")


if __name__ == '__main__':
    main()

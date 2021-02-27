def main():
    t = int(input())
    while t:
        l = int(input())
        r = int(input())
        if l*2 > r:
            print(f"{-1} {-1}")
        else:
            print(f"{l} {l*2}")

        t -= 1


if __name__ == "__main__":
    main()

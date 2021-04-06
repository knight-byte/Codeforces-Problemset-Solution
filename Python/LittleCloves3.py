def main():
    num = int(input())
    if num % 3 == 2:
        print(f"1 2 {num-3}")
    else:
        print(f"1 1 {num-2}")


if __name__ == '__main__':
    main()

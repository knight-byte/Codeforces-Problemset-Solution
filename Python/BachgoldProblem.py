def main():
    n = int(input())
    sol = []
    for i in range(n/2):
        sol.append(2)
    if n % 2 != 0:
        sol.pop()
        sol.append(3)
    print(len(sol))
    for i in sol:
        print(i, end=" ")
    print()


if __name__ == "__main__":
    main()

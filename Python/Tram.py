def main():
    stops = int(input())
    exit = []
    enter = []
    for i in range(stops):
        exit.append(int(input()))
        enter.append(int(input()))
    sum = 0
    maxCapacity = 0
    for i in range(stops):
        sim = sum-exit[i]+enter[i]
        if sum >= maxCapacity:
            maxCapacity = sum
    print(maxCapacity)


if __name__ == '__main__':
    main()

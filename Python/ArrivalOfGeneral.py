def main():
    n = int(input())
    maxIn, maxVal, minIn, minVal = 0, 0, 0, 1000
    for i in range(n):
        x = int(input())
        if x > maxVal:
            maxVal = x
            maxIn = i
        if x <= minVal:
            minVal = x
            minIn = i
    if maxIn > minIn:
        print((maxIn-1)+(n-minIn)-1)
    else:
        print((maxIn-1)+(n-minIn))


if __name__ == '__main__':
    main()

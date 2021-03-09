def main():
    t = int(input())
    while t:
        n = int(input())
        temp = 1
        z = n/2
        if z % 2 != 0:
            print("NO")
        else:
            arr = [2*(i+1) for i in range(n/2)]
            for i in range(n/2-1, n-1):
                arr.append(temp)
                temp += 2
            arr[n-1] += n/2
            print("YES")
            for i in arr:
                print(i)
        t -= 1


if __name__ == '__main__':
    main()

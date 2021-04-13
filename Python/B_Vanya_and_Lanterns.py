def main():
    lantern, length = map(int, input().split())
    a = sorted(list(map(int, input().split())))
    mx = [0]
    mx += [a[i+1]-a[i] for i in range(lantern-1)]
    print(max(max(max(mx)/2, a[0]), length-a[-1]))


if __name__ == '__main__':
    main()

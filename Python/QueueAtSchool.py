def main():
    n, t = map(int, input().split())
    queue = list(input().upper())
    for _ in range(t):
        i = 0
        while i < n-1:
            if queue[i] == "B" and queue[i+1] == "G":
                queue[i], queue[i+1] = queue[i+1], queue[i]
                i += 2
            else:
                i += 1
    print("".join(queue))


if __name__ == '__main__':
    main()

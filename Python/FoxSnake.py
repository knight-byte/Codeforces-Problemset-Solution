def main():
    n = int(input())
    m = int(input())
    v1 = []
    tail_pos = 1
    for i in range(n):
        temp = ""
        for j in range(m):
            if i % 2 == 0:
                temp += "#"
        v1.append(temp)


if __name__ == "__main__":
    main()

def main():
    matrix = [list(map(int, input().split())) for _ in range(5)]
    col = 0
    row = 0
    for i in range(5):
        if 1 in matrix[i]:
            row = i+1
            for j in range(5):
                if 1 == matrix[i][j]:
                    col = j+1
                    break
            break
    print(abs(row-3)+abs(col-3))


if __name__ == '__main__':
    main()

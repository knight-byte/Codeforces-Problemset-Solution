def main():
    matrix = [[0 for j in range(5)] for i in range(5)]
    row, col = 0, 0
    for i in range(5):
        for j in range(5):
            matrix[i][j] = int(input())
            if matrix[i][j] == 1:
                row = i+1
                col = j+1

    pos = 0
    if 3-row < 0:
        row = (-1*(3-row))
    else:
        row = 3-row
    if 3-col < 0:
        col = (-1*(3-col))
    else:
        col = 3-col
    pos = row+col
    print(pos)


if __name__ == "__main__":
    main()

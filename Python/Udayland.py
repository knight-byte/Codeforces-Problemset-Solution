def main():
    n = int(input())
    vs = [input() for i in range(5)]
    state = False
    inn = True
    for i in range(n):
        if inn:
            for j in range(4):
                if vs[i][j] == "O" and vs[i][j+1] == "O":
                    state = True
                    vs[i][j] = "+"
                    vs[i][j+1] = "+"
                    inn = False
                    break
        else:
            break
    if state:
        print("YES")
        for i in vs:
            print(i)
    else:
        print("NO")


if __name__ == '__main__':
    main()

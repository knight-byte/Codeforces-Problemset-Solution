def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [list(input()) for i in range(n)]
        point1 = None
        point2 = None
        for i in range(n):
            for j in range(n):
                if arr[i][j] == "*" and point1 == None:
                    point1 = (i, j)
                elif arr[i][j] == "*" and point1 != None:
                    point2 = (i, j)
                elif point2 != None:
                    break
            if point2 != None:
                break

        new_p1 = None
        new_p2 = None
        if point1[0] == point2[0]:
            if point1[0]+1 < n:
                new_p1 = (point1[0]+1, point1[1])
                new_p2 = (point2[0]+1, point2[1])
            else:
                new_p1 = (point1[0]-1, point1[1])
                new_p2 = (point2[0]-1, point2[1])

        elif point1[1] == point2[1]:
            if point1[1]+1 < n:
                new_p1 = (point1[0], point1[1]+1)
                new_p2 = (point2[0], point2[1]+1)
            else:
                new_p1 = (point1[0], point1[1]-1)
                new_p2 = (point2[0], point2[1]-1)
        else:
            new_p1 = (point2[0], point1[1])
            new_p2 = (point1[0], point2[1])

        arr[new_p1[0]][new_p1[1]] = "*"
        arr[new_p2[0]][new_p2[1]] = "*"
        for i in range(n):
            print("".join(arr[i]))


if __name__ == '__main__':
    main()

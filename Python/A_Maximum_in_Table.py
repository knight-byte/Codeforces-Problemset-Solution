
def main():
    n = int(input())
    arr = [[0]*n]*n
    for i in range(n):
        for j in range(n):
            if i == 0 or j == 0:
                arr[i][j] = 1
            else:
                arr[i][j] = arr[i-1][j]+arr[i][j-1]
    print(arr[-1][-1])


if __name__ == '__main__':
    main()


# ------------- ignore ---------
'''
1 1
1 2             2=1

1 1 1 
1 2 3 
1 3 6           3 = 6

1 1 1 1 
1 2 3 4 
1 3 6 10
1 4 10 20       4 = 20 

1  1  1  1  1
1  2  3  4  5
1  3  6 10  15
1  4 10 20  35
1  5 15 35  70   5 =70


1  1  1  1  1  1
1  2  3  4  5  6
1  3  6 10  15 21
1  4 10 20  35 36
1  5 15 35  70 106  
1  6 21 36  106 212  6 = 212
'''

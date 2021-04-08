def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        if n < 2:
            print(0)
        elif n == 2:
            print(m)
        else:
            print((m*2))


if __name__ == '__main__':
    main()


'''

arr= [] 
len(arr) => n
sum(arr) => m

ans => sum(arr)*2 

6 5
[ 0, 5 ,0 ]
[ 0, 2, 3, 0 ] => [ 0, 2 ] +[ 2, 3 ] => 2 + 1 = 3

[ 0,2,0,3,0]

'''

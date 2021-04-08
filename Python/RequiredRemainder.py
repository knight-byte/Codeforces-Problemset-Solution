def main():
    t = int(input())
    for _ in range(t):
        x, y, n = map(int, input().split())
        ans = n + (x - (n % x)) - (x - y)
        if n % x < y:
            ans -= x
        print(ans)


if __name__ == '__main__':
    main()

# ----------------- IGNORE -------------
'''
-- logic --
k % x = y

e.g. 

x = 3, y = 1, n =11  
2

11 + ( 3 - 2'rem' ) => 12 - ( 3 - 1 ) => 11 + ( 3 - 2'rem' ) - ( 3 - 1'req' ) 
                                      => n + ( x - ( n % x )) - ( x - y )

if rem < y : ans-y 
'''

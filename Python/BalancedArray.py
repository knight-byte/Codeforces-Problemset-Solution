def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n < 4:
            print("NO")
        else:
            even = []
            odd = []
            for i in range(0, n//2):
                even.append(2*i+2)
                odd.append(2*i+1)
            odd = odd[:-1]
            e_sum = sum(even)
            o_sum = sum(odd)
            diff = (e_sum-o_sum)

            if diff % 2 == 0:
                print("NO")
            else:
                print("YES")
                print(f'{" ".join(map(str, even+odd))} {diff}')


if __name__ == '__main__':
    main()


'''
4
1 3 = 4
2 4 = 6

6
1 3 5
2 4 6

'''

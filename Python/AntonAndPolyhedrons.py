def main():
    sides = {"tetrahedron": 4, "cube": 6, "octahedron": 8,
             "dodecahedron": 12, "icosahedron": 20}
    n = int(input())
    ans = 0
    for _ in range(n):
        shape = input().lower()
        ans += sides[shape]
    print(ans)


if __name__ == '__main__':
    main()

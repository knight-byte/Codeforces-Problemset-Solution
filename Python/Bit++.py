def main():
    _ = int(input())
    ans = 0
    for i in range(_):
        op = input()
        if op.lower() in ["++x", "x++"]:
            ans += 1
        elif op.lower() in ["--x", "x--"]:
            ans -= 1
    print(ans)


if __name__ == '__main__':
    main()

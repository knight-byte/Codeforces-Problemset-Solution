def main():
    n = int(input())
    score = 0
    for _ in range(n):
        m, c = map(int, input().split())
        if m > c:
            score += 1
        elif c > m:
            score -= 1
    if score > 0:
        print("Mishka")
    elif score < 0:
        print("Chris")
    else:
        print("Friendship is magic!^^")


if __name__ == '__main__':
    main()

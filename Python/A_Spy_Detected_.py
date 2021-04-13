from collections import Counter


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        cnt = Counter(arr).most_common()
        ind = cnt[1][0]
        print(arr.index(ind)+1)


if __name__ == '__main__':
    main()

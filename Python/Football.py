from itertools import groupby


def main():
    teams = list(input())
    x = groupby(teams)
    for i, j in x:
        if len(list(j)) >= 7:
            print("YES")
            break
    else:
        print("NO")


if __name__ == '__main__':
    main()

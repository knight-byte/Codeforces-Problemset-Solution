import re


def main():
    num = int(input())
    x = re.search(r"^[47]{,3}$", string=str(num))
    if x != None:
        return "YES"
    for i in [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]:
        if num % i == 0:
            return "YES"
    else:
        return "NO"


if __name__ == '__main__':
    print(main())

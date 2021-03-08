from typing import Tuple

from typing_extensions import TypeGuard


def main():
    t = int(input())
    ans = []
    while t:
        n = int(input())
        total = 0
        arr = [int(input()) for i in range(n)]
        if total % 2 != 0:
            ans.append("YES")
        else:
            even = False
            odd = False
            for i in arr:
                if i % 2 == 0:
                    even = True
                else:
                    odd == True
            if even and odd:
                ans.append("YES")
            else:
                ans.append("NO")
        t -= 1
    for i in ans:
        print(i)


if __name__ == '__main__':
    main()

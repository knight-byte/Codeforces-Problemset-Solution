import re


def main():
    t = int(input())
    for _ in range(t):
        num = input()
        count = 0
        res = []
        for i in range(1, len(num)+1):
            if num[i-1] == "0":
                continue
            count += 1
            res.append(num[i-1]+"0"*(len(num)-i))
            re_num = re.findall(r"[123456789]", string=num[i:])
            if len(re_num) == 0:
                break

        print(f"{count}\n{' '.join(res)}")


if __name__ == '__main__':
    main()

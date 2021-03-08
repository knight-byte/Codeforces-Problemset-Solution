def main():
    s1 = input()
    s2 = []
    for i in range(len(s1)-1):
        if s1[i] == ".":
            s2.append("0")
        elif s1[i] == '-' and s1[i+1] == '.':
            s2.append("1")
            i += 1
        elif s1[i] == "-" and s2[i+1] == "-":
            s2.append("2")
            i += 1
    print("".join(s2))


if __name__ == '__main__':
    main()

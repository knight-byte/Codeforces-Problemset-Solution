def main():
    t = int(input())
    host = []
    guest = []
    for i in range(2*t):
        temp = int(input())
        if i % 2 != 0:
            host.append(temp)
        else:
            guest.append(temp)
    count = 0
    for i in range(len(host)):
        for j in range(len(guest)):
            if host[i] == guest[j]:
                count += 1
    print(count)


if __name__ == "__main__":
    main()

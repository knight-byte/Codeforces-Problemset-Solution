def main():
    n = int(input())
    m = int(input())
    arr = [input() for i in range(n*m)]
    state = False
    for x in arr:
        if (x == 'C' or x == 'M' or x == 'Y'):
            state = True
            break
    if state:
        print("#Color")
    else:
        print("#Black&White")


if __name__ == "__main__":
    mian()

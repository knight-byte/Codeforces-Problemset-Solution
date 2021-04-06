def main():
    n = int(input())
    feel = ["I hate" if i % 2 == 0 else "I love" for i in range(n)]
    ans = " that ".join(feel)
    print(f"{ans} it")


if __name__ == '__main__':
    main()

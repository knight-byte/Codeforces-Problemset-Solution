def main():
    n, m = map(int, input().split())
    hash = "#"*m
    dot = [hash]
    d = True
    for i in range(n//2):
        if d:
            d = not d
            dot.append(f"{'.'*(m-1)}#")
        else:
            dot.append(f"#{'.'*(m-1)}")
            d = not d
        dot.append(hash)
    ans = "\n".join(dot)
    print(ans)


if __name__ == "__main__":
    main()

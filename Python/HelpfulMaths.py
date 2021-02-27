def main():
    s1 = input()
    arr1 = [int(i) for i in s1 if i != "+"]
    finalString = ""
    arr1 = sorted(arr1)
    for i in arr1:
        finalString += str(i)+"+"
    finalString = finalString[:len(finalString)-1]
    print(finalString)


if __name__ == "__main__":
    main()

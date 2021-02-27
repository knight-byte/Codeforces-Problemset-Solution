def steps_counter(coord):
    steps = 0
    while coord > 0:
        coord -= 5
        steps += 1
    return steps


def main():
    coordinates = int(input())
    output = steps_counter(coordinates)
    print(output)


if __name__ == "__main__":
    main()

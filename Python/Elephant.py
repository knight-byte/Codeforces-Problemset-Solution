def main():
    total_step = int(input())
    count_step = 0
    for i in range(5, 1, -1):
        count_step += total_step//i
        total_step = total_step % i
    count_step += total_step

    print(count_step)


if __name__ == '__main__':
    main()

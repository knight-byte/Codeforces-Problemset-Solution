'''
Author     : knight_byte
File       : B_BerSU_Ball.py
Created on : 2021-04-18 10:22:59
'''


def main():
    nb = int(input())
    ab = sorted(list(map(int, input().split())))
    ng = int(input())
    ag = sorted(list((map(int, input().split()))))
    count = 0
    if nb > ng:
        nb, ng = ng, nb
        ab, ag = ag, ab
    for i in range(nb):
        if ab[i]-1 in ag:
            ag.remove(ab[i]-1)
            count += 1
        elif ab[i] in ag:
            ag.remove(ab[i])
            count += 1
        elif ab[i]+1 in ag:
            ag.remove(ab[i]+1)
            count += 1

    print(count)


if __name__ == '__main__':
    main()

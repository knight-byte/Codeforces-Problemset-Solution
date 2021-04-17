'''
Author     : knight_byte
File       : A_Ilya_and_Bank_Account.py
Created on : 2021-04-17 11:22:40
'''


def main():
    bal = input()
    if int(bal) >= 0:
        print(bal)
    else:
        if len(bal) > 2:
            if int(bal[-1]) >= int(bal[-2]):
                print(int(bal[:-1]))
            else:
                print(int(bal[:-2]+bal[-1]))
        else:
            print(0)


if __name__ == '__main__':
    main()

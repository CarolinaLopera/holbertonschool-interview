#!/usr/bin/python3
'''Check UTF-8'''


def validUTF8(data):
    '''Return False if the validation fail'''
    count = 0

    for i in data:
        binary = format(i, '#010b')[-8:]

        if count == 0:
            for bit in binary:
                if bit == '0':
                    break
                count += 1
            if count == 0:
                continue
            if count == 1 or count > 4:
                return False
        else:
            if not (binary[0] == '1' and binary[1] == '0'):
                return False
        count -= 1

    return count == 0

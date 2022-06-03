#!/usr/bin/python3
'''Imports'''
import fileinput


count = 0
size = 0
dict = {'200': 0, '301': 0, '400': 0,
        '401': 0, '403': 0, '404': 0,
        '405': 0, '500': 0}

for line in fileinput.input():
    cpy = ''
    for i in range(len(line)):
        cpy += line[i]
    div = cpy.split()
    count += 1
    size += int(div[8])
    for key in dict:
        if div[7] == key:
            dict[key] += 1
    if count == 10:
        print('File size:', size)
        count = 0
        for key in dict:
            if dict[key] != 0:
                print('{}: {}'.format(key, dict[key]))


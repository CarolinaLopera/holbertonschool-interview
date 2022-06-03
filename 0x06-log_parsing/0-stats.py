#!/usr/bin/python3
'''script that reads stdin line by line and computes metrics'''
import fileinput


count, size = 0, 0
dict = {'200': 0, '301': 0, '400': 0, '401': 0,
        '403': 0, '404': 0, '405': 0, '500': 0}

try:
    for line in fileinput.input():
        cpy = ''
        for i in range(len(line)):
            cpy += line[i]
        div = cpy.split()
        count += 1
        size += int(div[8])
        if div[7] in dict:
            dict[div[7]] += 1
        if count == 10:
            print('File size:', size)
            count = 0
            for key in dict:
                if dict[key] != 0:
                    print('{}: {}'.format(key, dict[key]))
# except KeyboardInterrupt:
finally:
    print('File size:', size)
    for key in dict:
        if dict[key] > 0:
            print('{}: {}'.format(key, dict[key]))

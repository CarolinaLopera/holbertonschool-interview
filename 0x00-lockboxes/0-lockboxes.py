#!/usr/bin/python3
'''Question interview'''


def canUnlockAll(boxes):
    '''Function to check if all box can be open'''
    open = {0: 'True'}

    for i in range(0, len(boxes)):
        for j in range(0, len(boxes[i])):
            key = boxes[i][j]
            if key <= len(boxes) and i in open:
                open[key] = True

    for m in range(len(boxes)-1, -1, -1):
        for n in range(0, len(boxes[m])):
            key = boxes[m][n]
            if key <= len(boxes) and m in open:
                open[key] = True

    if (len(open) == len(boxes)):
        return True

    return False

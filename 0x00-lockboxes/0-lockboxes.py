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

    for i in range(0, len(boxes)):
        for j in range(0, len(boxes[i])):
            key = boxes[i][j]
            if key <= len(boxes) and i in open:
                open[key] = True

    for i in range(0, len(boxes)):
        for j in range(0, len(boxes[i])):
            key = boxes[i][j]
            if key <= len(boxes) and i in open:
                open[key] = True

    if (len(open) == len(boxes)):
        return True

    return False

    # print('dict', open)
    # print('i:', i); print('box[i]:', boxes[i]); print()
    # print('j:', j); print('box[i][j]: ', boxes[i][j]); print()
    # print('add:', key)
    # print(len(boxes))

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

    # for i in range(0, len(boxes)):
    #     for j in range(0, len(boxes[i])):
    #         key = boxes[i][j]
    #         if key <= len(boxes) and i in open:
    #             open[key] = True

    for x in range(0, len(boxes)):
        for z in range(0, len(boxes[x])):
            key = boxes[x][z]
            if key <= len(boxes) and x in open:
                open[key] = True

    if (len(open) == len(boxes)):
        return True

    return False

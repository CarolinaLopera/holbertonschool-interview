#!/usr/bin/python3
'''Question interview'''


def canUnlockAll(boxes):
    '''Function to check if all box can be open'''
    open = {0: True}

    # for i in range(0, len(boxes)):
    #     for j in range(0, len(boxes[i])):
    #         key = boxes[i][j]
    #         if key <= len(boxes) and i in open.keys():
    #             open[key] = True
    # for m in range(len(boxes)-1, -1, -1):
    #     for n in range(0, len(boxes[m])):
    #         key = boxes[m][n]
    #         if key <= len(boxes) and m in open.keys():
    #             open[key] = True

    for i in range(0, len(boxes)):
        if (len(boxes[i]) < len(boxes)):
            for j in boxes[i]:
                if j <= len(boxes) and i in open.keys():
                    open[j] = True
                    if (j < len(boxes)):
                        for x in boxes[j]:
                            if x <= len(boxes) and j in open.keys():
                                open[x] = True

    if (len(open) == len(boxes)):
        return True
    return False

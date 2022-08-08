#!/usr/bin/python3
"""interview boxes"""


def canUnlockAll(boxes):
    """function that identifies
        if all the boxes have a key
        that opens them"""
    newlist = []
    k = len(boxes)
    for i in boxes:
        if len(i) == 0 and i is not boxes[k-1]:
            return False
        for j in i:
            newlist.append(j)

    for i, keys in enumerate(boxes):
        if i in newlist or i < k-1:
            return True
        else:
            return False

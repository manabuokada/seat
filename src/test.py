import random

def qsort (list:list):
    if len(list) < 1:
        return list

    pivot = list.pop(0)
    return qsort ([x for x in list if x < pivot]) + [pivot] + qsort([x for x in list if x >= pivot])

a = qsort([random.randint(0, 10000000) for i in range(100000)])
print (a)
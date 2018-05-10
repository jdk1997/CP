import itertools
n = int(input())
per = [i for i in range(1, n + 1)]
per = itertools.permutations(per)
items = list(map(int, input().split()))
tup_items = tuple(items)
if tup_items in per:
    for i in tup_items:
        print(i, end = ' ')
else:
    for i in range(len(items)):
        if items[i] != i + 1:
            items[i] = i + 1
        else:
            pass
    for i in items:
        print(i, end = ' ')

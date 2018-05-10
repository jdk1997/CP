from collections import OrderedDict
n, m = map(int, input().split())
ips1, ips2 = OrderedDict(), OrderedDict()
for i in range(n):
    name, ip = input().split()
    ips2[ip] = name
for i in range(m):
    name1, ip1 = input().split()
    ips1[name1] = ip1

for j in ips1:
    for i in ips2:
        if ';' in ips1[j] and i + ';' == ips1[j]:
            print(j, ips1[j], '#' + ips2[i])
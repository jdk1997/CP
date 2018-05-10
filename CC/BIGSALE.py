t = int(input())
for _ in range(t):
    loss = []
    items = int(input())
    for i in range(items):
        price, quan, disc = map(int, input().split())
        in_price = price + (price * (disc / 100))
        fin_price = in_price - (in_price * (disc / 100))
        loss.append((price - fin_price) * quan)
    print('{:.9f}'.format(sum(loss)))
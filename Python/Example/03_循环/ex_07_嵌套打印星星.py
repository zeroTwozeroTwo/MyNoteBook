# 行变量
row = 1
while row <= 5:
    # 列变量
    col = 1
    while col <= row:
        print("*", end="")
        col += 1
    print()
    row += 1

# 打印九九乘法表
row = 1
while row <= 9:
    col = 1
    while col <= row:
        print("%d * %d = %2d    " % (col, row, col * row), end="")
        col += 1
    print()
    row += 1
# 打印星号
row = 1
while row <= 9:
    col = 1
    while col <= row:
        print("*", end="")
        col += 1
    print("%d" % row)
    row += 1

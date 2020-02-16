# 计算 0 - 100 之间所有的 偶数 的累计求和结果
# 计数器
i = 0
# 记录最终结果
result = 0
while i <= 100:
    if i % 2 == 0:
        result += i
    i += 1
print("0 - 100 之间所有的偶数为:%d" % result)

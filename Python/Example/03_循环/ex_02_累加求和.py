# 计算 0 - 100 之间所有数字的累计求和结果
# 0. 定义最终结果的变量
result = 0
# 1. 定义一个整数的变量记录循环的次数
i = 0

# 2. 开始循环
while i <= 100:
    # print(i)
    # 每次循环就相加
    result += i
    # 处理计算器
    i += 1
print("累加结果: %d" % result)

poem_str = "登鹤雀楼\t 王之涣 \t 白日依山尽 \t \n 黄河入海流"

print(poem_str)

# 1. 拆分字符串
poem_list = poem_str.split()
print(poem_list)

# 2. 合并字符串
print(" ".join(poem_list))

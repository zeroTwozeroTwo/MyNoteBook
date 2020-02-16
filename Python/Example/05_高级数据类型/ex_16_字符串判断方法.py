# 1. 判断空白字符
space_str = "        "

# print(space_str.isspace())

# 2. 判断字符串中是否只包含数字
# 1> 都不能判断小数
num_str = "1"

print(num_str.isdecimal())  # 只能判断纯数字
print(num_str.isdigit())  # 可以判断字符编码
print(num_str.isnumeric())  # 可以判断中文数值



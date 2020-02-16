hello_str = "hello world"

# 1. 判断是否以指定字符串开始
print(hello_str.startswith("hello"))  # 区分大小写

# 2. 判断是否以指定字符串结束
print(hello_str.endswith("world"))  # 区分大小写

# 3. 查找指定字符串
# index 同样可以查找指定字符串在大字符串中的索引
# index 如果指定的字符串不存在,会报错
# find 如果指定的字符串不存在,会返回-1
print(hello_str.find("llo"))

# 4. 替换字符串
# replace方法执行完成后,会返回一个新的字符串
# 注意:不会修改原有字符串的内容
print(hello_str.replace("llo", "llp"))
print(hello_str)

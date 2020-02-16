# 1. 打开文件
file = open("README")
# 2. 读取文件内容
# 读取文件后文件指针会改变
text = file.read()
# 3. 关闭文件
file.close()
print(text)
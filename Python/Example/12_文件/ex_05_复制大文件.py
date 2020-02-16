# 1. 打开
file_read = open("README")
file_write = open("README[复件]", "w")

# 2. 读写
while True:
    # 读取一行内容
    line = file_read.readline()

    # 判断是否读取到内容
    if not line:
        break
    file_write.write(line)

# 3. 关闭
file_write.close()
file_read.close()

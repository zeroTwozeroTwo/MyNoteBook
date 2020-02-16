file = open("README")
while True:
    line = file.readline()
    # 判断是否读取到内容
    if not line:
        break

    print(line)

file.close()

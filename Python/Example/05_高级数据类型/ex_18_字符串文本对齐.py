# 要求: 顺序并且居中对齐输出一下内容
poem = ["登鹤雀楼",
        "王之涣\t\n",
        "白日依山尽",
        "黄河入海流"]

for poem_str in poem:
    print("|%s|" % poem_str.strip().center(10, "　"))

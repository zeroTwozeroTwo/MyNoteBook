students = [
    {"name": "阿土"},
    {"name": "小美"},
]

# 在学员列表中搜索指定的姓名
find_name = "阿斯顿发"

for student in students:
    print(student)

    if student["name"] == find_name:
        print("找到了 %s" % find_name)
        # 如果已经找到,应该直接退出循环,而不再变量后续的元素
        break
else:
    # 如果希望在搜索列表时,所有的字典检查之后,都没有发现需要搜索的目标
    # 还希望得到一个统一的提示!
    print("没有找到 %s" % find_name)

print("循环结束")
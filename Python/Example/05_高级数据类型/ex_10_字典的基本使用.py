xiaoming_dict = {"name": "小明"}

# 1. 取值
print(xiaoming_dict["name"])

# 2. 增加/修改
# 如果key不存在,会新增键值对
xiaoming_dict["weight"] = 1.75
xiaoming_dict["age"] = 18
# 如果key存在,会修改键值对
xiaoming_dict["name"] = "大明"

# 删除
xiaoming_dict.pop("name")

print(xiaoming_dict)

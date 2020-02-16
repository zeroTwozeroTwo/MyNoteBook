# 使用 多个键值对 存储 描述一个物体的相关信息 ---- 描述更复杂的数据信息
# 将 多个字典 放在一个列表中,再进行遍历
card_list = [
    {"name": "张三",
     "qq": "1234",
     "phone": "110"},
    {"name": "李四",
     "qq": "5243",
     "phone": "10086"}
]
for card_info in card_list:
    for card in card_info:
        print(card)

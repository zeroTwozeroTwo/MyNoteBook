# 导入随机工具包
import random
# 从控制台输入要出的拳 - 石头(1) / 剪刀(2) / 布(3)
player = int(input("请输入您要出的拳 石头(1) / 剪刀(2) / 布(3):"))
# 电脑 随机 出拳 --- 先假定电脑只会出石头,完成整体代码功能
computer = random.randint(1,3)
print("玩家选择的拳头是:%d - 电脑出的拳是: %d" % (player, computer))
# 比较胜负
# 1 石头 胜 剪刀
# 2 剪刀 胜 布
# 3 布 胜 石头
if((player == 1 and computer == 2)
        or (player == 2 and computer == 3)
        or (player == 3 and computer == 1)):

    print("您赢了")
# 平局
elif player == computer:
    print("平局")
# 电脑获胜
else:
    print("您输了")

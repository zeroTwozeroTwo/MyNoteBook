class Dog(object):

    def __init__(self, name):
        self.name = name

    def game(self):
        print("%s 在玩" % self.name)


class XiaoTianQuan(Dog):

    def game(self):
        print("%s 在天上玩" % self.name)


class Person(object):

    def __init__(self, name):
        self.name = name

    def game_with_dog(self, dog):
        print("%s 和 %s 快乐的玩耍.." % (self.name, dog.name))

        # 让狗玩耍
        dog.game()


dog = XiaoTianQuan("哮天犬")

xm = Person("小明")

xm.game_with_dog(dog)

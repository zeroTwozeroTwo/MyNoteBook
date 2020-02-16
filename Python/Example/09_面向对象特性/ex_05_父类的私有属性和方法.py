class A:
    def __init__(self):
        self.num1 = 100
        self.__num2 = 200

    def __test(self):
        print("私有方法 %d %d" % (self.num1, self.__num2))


class B(A):
    pass


b = B()
print(b)
# 在外界不能直接访问对象的私有属性/调用私有方法

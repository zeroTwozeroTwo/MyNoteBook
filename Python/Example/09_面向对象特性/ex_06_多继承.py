class A:

    def test(self):
        print("test 方法")


class B:

    def demo(self):
        print("demo方法")


class C(A, B):
    """多继承可以让子类对象,同时具有多个父类的属性和方法"""
    def __init__(self):
        self.demo()
        self.test()


c = C()
print(c)

print(C.__mro__)
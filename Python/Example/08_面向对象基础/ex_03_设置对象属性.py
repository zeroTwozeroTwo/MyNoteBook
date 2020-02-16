class Cat:

    def eat(self):
        # 哪一个对象调用的方法,self就是哪一个对象的引用
        print("%s 猫吃鱼" % self.name)

    def drink(self):
        print("%s 小猫喝水" % self.name)


# 创建猫对象
tom = Cat()
tom.name = "Tom"
tom.eat()
tom.drink()

# 再创建一个猫对象
lazy_cat = Cat()
lazy_cat.name = "lazy_cat"
lazy_cat.eat()
lazy_cat.drink()

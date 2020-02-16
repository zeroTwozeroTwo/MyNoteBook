class Cat:


    def eat(self):
        print("猫吃鱼")



    def drink(self):
        print("小猫喝水")


# 创建猫对象
tom = Cat()
tom.eat()
tom.drink()

print(tom)

addr = id(tom)

print(addr)
class Person:

    def __init__(self, name, weight):
        self.name = name
        self.weight = weight

    def __str__(self):
        return "我的名字叫 %s 体重是 %.2f" % (self.name, self.weight)

    def run(self):
        print("%s 爱跑步" % self.name)
        self.weight -= 0.5

    def eat(self):
        print("%s 吃东西" % self.name)
        self.weight += 1


xiaoming = Person("小明", 75)

xiaoming.run()
xiaoming.eat()

print(xiaoming)

xiaomei = Person("小美",45)
xiaomei.run()
xiaomei.eat()

print(xiaomei)

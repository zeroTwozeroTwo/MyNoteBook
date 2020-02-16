from ex_01_测试模块1 import Dog
from ex_02_测试模块2 import say_hello

# 注意事项:导入同名函数后导入的会覆盖先导入的
say_hello()
dog = Dog()
print(dog)
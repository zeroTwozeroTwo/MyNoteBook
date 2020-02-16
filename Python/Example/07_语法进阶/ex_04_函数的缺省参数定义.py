def print_info(name, gender=True):
    """

    :param name: 姓名
    :param gender: True表示男生 False 女生
    :return:
    """
    gender_text = "男生"

    if not gender:
        gender_text = "女生"
    print("%s 是 %s" % (name, gender_text))


# 提示: 在指定缺省参数的默认值时,应该使用最常见的值作为默认值!
# 1> 缺省参数必须在参数列表末尾
# 2> 在调用函数时,如果有多个缺省参数,需要指定参数名
print_info("小明")
print_info("小美", False)

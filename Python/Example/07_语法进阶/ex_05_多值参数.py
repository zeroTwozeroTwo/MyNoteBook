def demo(num, *args, **kwargs):
    """

    :param num: 数字
    :param args: * 一个星号表示元组
    :param kwargs: ** 两个星号表示字典
    :return:
    """
    print(args)
    print(kwargs)


demo(10, 1, 2, 3, 4, 5, 6, 7, 8, name="222")

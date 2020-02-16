import cards_tools

while True:
    # 显示功能菜单
    cards_tools.show_menu()

    action_str = input("请选择希望执行的操作: ")
    print("您选择的操作是[%s]" % action_str)

    # 1,2,3 针对名片的操作
    if action_str in ["1", "2", "3"]:
        if action_str == "1":
            cards_tools.new_card()
        elif action_str == "2":
            cards_tools.show_all()
        elif action_str == "3":
            cards_tools.search_card()
    # 0 退出系统
    elif action_str == "0":
        print("欢迎再次使用[名片管理系统]")
        break
        # 如果在开发程序时,不希望立刻编写分支内部代码
        # 可以使用 pass 关键字,表示一个占位符,能够保证程序的代码结构正确!
        pass
    # 其他内容输入错误,提示用户
    else:
        print("您输入的不正确,请重新选择")

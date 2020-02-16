def sum_number(num):
    print(num)

    if num == 1:
        return num
    return num + sum_number(num - 1)


result = sum_number(5)
print(result)

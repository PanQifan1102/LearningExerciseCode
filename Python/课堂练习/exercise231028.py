# 1.求100以内所有的奇数和
# 思考：如何判断奇偶；如何把100以内的数都判断一遍
i = 0
Sum = 0
for i in range(1,100,2):
    Sum = Sum + i
print(Sum)

i = 0
Sum = 0
for i in range(1,100):
    if i % 2 != 0:
        Sum = Sum +i
print(Sum)


# 2.求100以内所有是3的倍数的整数和，以及个数
# 思考：3的倍数是哪些数；如何将它们都加起来
i = 0
num = 0
Sum = 0
for i in range(1,100):
    if i % 3 == 0:
        num += 1
        Sum += i
print(Sum)
print(num)


# 3.求1000以内的水仙花数
# 水仙花数是指一个n位数（n>=3)，它的每一位上的数字的n次幂之和等于它本身
# 如： 1**3 + 5**3 + 3**3 =  153
# 思考：水仙花数的判断；如何把1000以内的数都过一遍；各位数的提取
for num in range(100,1000):
    num_3 = num // 100
    num_2 = (num % 100) // 10
    num_1 = num % 10
    if (num_3 ** 3) + (num_2 ** 3) + (num_1 ** 3) == num:
        print(num)


# 4.获取用户输入的任意数，判断其是否为质数
# 质数的定义：只能被1和自身整除
num = int(input("请输入一个数字: "))
if num > 1:
    # 查看因子
    for i in range(2, num):
        if (num % i) == 0:
            print(num, "不是质数")
            print(i, "乘于", num // i, "是", num)
            break
    else:
        print(num, "是质数")
else:
    print(num, "不是质数")


# 5.使用while，完成以下图形的输出
num = 0
for i in range(1, 6):
    for j in range(0, i):
        print("*", end=" ")
    print()
for i in range(4, 0, -1):
    for j in range(0, i):
        print("*", end=" ")
    print()


sum = 0                                         # 定义初始值
avg = 0
num = int(input("how many entries: "))          # 赋值
numbers = [0] * num
for i in range(0, num):                         # Loop
    numbers[i] = int(input("Enter a number: "))
    sum = sum + numbers[i]
print(sum)                                      # 计算
print(sum / num)

def sum_number(num):
    sum=0
    for i in range(1, num+1):
        sum=sum+1
    return sum
num = int(input("Enter a number: "))
result=sum_number(num)
print("sum is ",result)

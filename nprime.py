n = int(input("Enter a number: "))
num = 2
count = 0

while count < n:
    is_prime = True
    for i in range(2, num):
        if (num % i) == 0:
            is_prime = False
            break
    if is_prime:
        print(num)
        count += 1
    num += 1


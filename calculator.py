a=int(input("enter the first number\t"))
b=int(input("enter the first number\t"))
print("enter the required operation:\n 1.Addition\n 2.subtraction\n 3.multiplication\n4.division\n5.expoinentiation\n6.floor division\n7.modulus\n")
choice=int(input("enter the your choice\n"))
if choice==1:
	c=a+b
	print(c)
elif(choice==2):
	print(a-b)
elif(choice==3):
	print(a*b)
elif(choice==4):
	print(a/b)
elif(choice==5):
	print(a**b)
elif(choice==6):
	print(a//b)
elif(choice==7):
	print(a%b)
else:
	print("invalid input")

p=int(input("enter the number"))
if(p>=2):
	flag=0
	i=1
	for i in range(1,int(p*0.5)+1):
		if(p/2==0):
			flag=1
	if(flag==1):
		print(p,"is a prime number")
	else:
		print(p,"is not prime")

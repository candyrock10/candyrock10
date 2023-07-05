# code to find a prime number


x=int(input("enter the number"))
if x >  0 :
    for i in range(2,x):     # for loop is used
     if x % 2 == 0:
        print("not a prime number")
        break
    else:
        print("prime number")
        # understand the concept of prime number
       

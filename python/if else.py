# this code will find even and odd number 


x=int(input("enter a number"))

if x % 2== 0 :
    print("even number")  
elif x % 2!= 0:            
    print("odd number")
else:
    print("try again")

    # as we know there are only two conditions for numbers 
    # we dont have to use else and instead of elif x % 2!= 0:            
    # print("odd number") WE CAN JUST USE else: 
    #                                          print("odd number")                             
a,b=int(input("Enter 1st Number: ")),int(input("Enter 2nd Number: "))
for i in reversed(range(1,(min(a,b))+1)):
    if((a%i==0) and (b%i==0)):
        print("The H.C.F is:",i)
        break

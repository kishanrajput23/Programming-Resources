a,b=int(input("Enter 1st Number: ")),int(input("Enter 2nd Number: "))
c=max(a,b)
while(1):
    if((c%a==0) and (c%b==0)):
        print("The L.C.F is:",c)
        break
    c+=1

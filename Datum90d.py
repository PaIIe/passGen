from datetime import date
# 19.10.2016 736256days since day 1
def add90(n): #prints 19.10.16 +90 Days n times
    i = 0
    
    while(i < n):
        tempdate = date.fromordinal(736256 + 90 + i)
        i = i+1
        print(tempdate)


from datetime import date

#generates randompassword!
#with follow requirements
#->atleast 13 Signs			->atleast 1 spezial character
#->atleast 1 captial Letter	->needs to Change every 90 Days
#->atleast 1 number			-> No reuse of the past 10 Passwords
#->between one and another password, one character needs to change.
import random

def generate():
    passw = []
    random.seed()
   
    i = 0
    while (i < 12):
        randomint = random.randint(1,100)
        print(randomint)
        if(randomint % 5 == 0):
            passw.append(random.choice('abcdefghijklmnopqrstuvwxyz'))
            i += 1
        elif(randomint % 7 == 0):
            passw.append(random.choice('ABCDEFGHIJKLMNOPQRSTUVWXYZ'))
            i += 1
        elif(randomint % 2 == 0):
            passw.append(random.choice('1234567890'))
            i += 1
        elif(randomint % 8 == 0):
            passw.append(random.choice('!§$%?'))
            i += 1
            
    print(passw)
    return        


# 19.10.2016 736256days since day 1
def add90(n): #prints 19.10.16 +90 Days n times
    i = 0
    daysSinceDayOne = 736256
    while(i < n):
        daysSinceDayOne += 90
        tempdate = date.fromordinal(daysSinceDayOne)
        i = i+1
        print(tempdate)


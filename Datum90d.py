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
    while (i < 13):
        randomint = random.randint(1,100)
        randomcoin = randomint % 2
        if(randomcoin == 0):
          
            passw.append(random.choice('1234567890'))
            
        else:
            passw.append(random.choice('ABCDEFGHIJKLMNOPQRSTUVWXYZ'))
            
        i = i + 1
            
        if(randomint % 5 == 1 and i < 13):
           
            passw.append(random.choice('abcdefghijklmnopqrstuvwxyz'))
            i = i + 1
            
        if(randomint % 3 == 1 and  i < 13):
            
            passw.append(random.choice('!§$%?'))
            i = i + 1

       
       
        
    
    return passw       


# 19.10.2016 736256days since day 1
def add90(n): #prints 19.10.16 +90 Days n times
    f = open('password.txt','w')
    i = 0
    daysSinceDayOne = 736256
    while(i < n):
        daysSinceDayOne += 90
        tempdate = date.fromordinal(daysSinceDayOne)
        i = i+1
        s = str(tempdate)
        p = str(generate())
        
        f.write(s)
        f.write(' --- {a} {b} {c} {d} {e} {f} {g} {h} {i} {j} {k} {l} {m}'.format(a = p[2], b = p[7], c = p[12], d = p[17], e = p[22], f = p[27], g = p[22], h = p[27], i =p[32], j = p[37], k =p[42], l = p[47] , m = p[52]))
        f.write("\n-----------------------------------------\n")
        
        print(tempdate, end = " ")
        print(p)

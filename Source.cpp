/*PASSGEN 24.09.2016
requirements
->atleast 12 Signs			->atleast 1 spezial character
->atleast 1 captial Letter	->needs to Change every 90 Days
->atleast 1 number			-> No reuse of the past 10 Passwords
->between one and another password, one character needs to change.
*/



/*
24.09.16
*/


#include <iostream>
#include <F:\CPlusPlus\Projects\passGenerator\TimeData.h>
#include <time.h>
#include <Windows.h>
#include <fsrm.h>
//#include <C:\Users\Danny\Documents\Visual Studio 2013\ThinkLikeAProgrammer\KeyGen\KeyGen\Pass.h>
using namespace std;
/*
void generatePassword()
{
  ofstream passwords;
  passwords.open("password.txt");

  int count = 0;
  for (int i = 1; i < 16; i++)
  {
    srand(time(NULL)*i); //creates Random seed out of the time function in STL
    char pass[15];
    int secretCoin = rand() % 2;
    char secretBig = rand() % 26 + 65;
    char secretSmall = rand() % 26 + 97;
    


    if (secretCoin == 1)
      pass[i-1] = secretBig;
    else
      pass[i-1] = secretSmall;
    
    if (secretBig % 3 == 0 && count < 2)
    {
      char secretSpecial = rand() % 6 + 33; /// TODO7
      pass[i-1] = secretSpecial;
      count++;
    }
    
    else if (secretSmall % 3 == 0)
    {
      char secretNumber = rand() % 10 + 48;
      pass[i - 1] = secretNumber;
    }
    
    
   
    
    cout << pass[i-1];
  }
  cout << endl;



}
*/
int main()
{  
  ofstream passwords;
  passwords.open("password.txt");

  char *passw;
  

  Time Month(18, 10, 2016);

  for (int i = 0; i < 50; i++)
  {
    passwords << Month.date._day << "." << Month.date._month << "." << Month.date._year << "       ";

    passw = generatePassword();
    passwords << passw[0] << passw[1] << passw[2] << passw[3] << passw[4] << passw[5] << passw[6] << passw[7] << passw[8] << passw[9] << passw[10] << passw[11] << passw[12] << passw[13] << passw[14] << "\n";
    passwords << "------------------------------\n";
    Sleep(1000.0);
    Month.add90Days();
  }
   
 
  
  passwords.close();
    

  
  

  int HOLD_SYSTEM;
  cin >> HOLD_SYSTEM;


  return 0;

}


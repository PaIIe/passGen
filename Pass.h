/*PASSGEN 24.09.2016
requirements
->atleast 12 Signs			->atleast 1 spezial character
->atleast 1 captial Letter	->needs to Change every 90 Days
->atleast 1 number			-> No reuse of the past 10 Passwords
->between one and another password, one character needs to change.
*/


#include <iostream>
#include <time.h>
#include <Windows.h>
#include <fsrm.h>
//#include <C:\Users\Danny\Documents\Visual Studio 2013\ThinkLikeAProgrammer\KeyGen\KeyGen\Pass.h>
using namespace std;

char *generatePassword()
{
  ofstream passwords;
  passwords.open("password.txt");

  int count = 0;
  char pass[15];
  for (int i = 1; i < 16; i++)
  {
    srand(time(NULL)*i); //creates Random seed out of the time function in STL
    
    int secretCoin = rand() % 2;
    char secretBig = rand() % 26 + 65;
    char secretSmall = rand() % 26 + 97;



    if (secretCoin == 1)
      pass[i - 1] = secretBig;
    else
      pass[i - 1] = secretSmall;

    if (secretBig % 3 == 0 && count < 2)
    {
      char secretSpecial = rand() % 6 + 33; /// TODO7
      pass[i - 1] = secretSpecial;
      count++;
    }

    else if (secretSmall % 3 == 0)
    {
      char secretNumber = rand() % 10 + 48;
      pass[i - 1] = secretNumber;
    }




    cout << pass[i - 1];
  }
  cout << endl;

  return pass;



}
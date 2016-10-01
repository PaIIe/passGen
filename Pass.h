/*PASSGEN 24.09.2016
requirements
->atleast 12 Signs			->atleast 1 spezial character
->atleast 1 captial Letter	->needs to Change every 90 Days
->atleast 1 number			-> No reuse of the past 10 Passwords
->between one and another password, one character needs to change.
*/

#include <iostream>
#include <time.h> 
#include <stdlib.h>
using namespace std;

void generatePassword()
{

  srand(time(NULL)); //creates Random seed
  char pass[15];
  int secretCoin = rand() % 2;
  char secretBig = rand() % 35 + 90;
  char secretSmall = rand() % 97 + 122;

  for (int i = 0; i < 15; i++)
  {
    if (secretCoin == 1)
      pass[i] = secretBig;
    else
      pass[i] = secretSmall;

    cout << pass[i];
  }

}
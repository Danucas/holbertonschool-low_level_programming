#include "holberton.h"
/**
*times_table - it prints alphabet
*/
void times_table(void)
{
int one;
int two;
for (one = 0; one < 10; one++)
{
for (two = 0; two < 10; two++)
{
  int r = one * two;
  char p[3];
  int firstd = r /10;
  int secd  = r % 10;
  int arPos;
  p[0] = ' ';
  if (firstd==0){
    p[1] = ' ';
}
  else
    {
      p[1] = firstd + '0';
}
p[2] = secd + '0';
if(two == 0){
_putchar('0');
}
else
{
  for (arPos = 0; arPos < 3; arPos++){
  _putchar(p[arPos]);
}
}
  if(two != 9){
    _putchar(',');
}
 }
  _putchar('\n');

}
}

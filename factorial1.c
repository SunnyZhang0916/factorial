//Rekursiv fakultetsfunktion

#include <stdio.h>

int factorial(int n)

{
  int ans;
  if(n == 0){                         //basfallet n = 0 kan vi hantera direkt
    ans = 1;
  }
  else {
    ans = n * factorial(n-1);
  }

  return ans;

}

int main(void)
{
  int b = factorial(4);

  printf("%d",b);

  return 0;
}

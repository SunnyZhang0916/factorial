/*
一只青蛙可以一次跳 1 级台阶或者一次跳 2 级台阶，例如：

跳上第 1 级台阶只有一种跳法：直接跳 1 级即可。
跳上第 2 级台阶有两种跳法：
每次跳 1 级，跳两次；或者一次跳 2 级。
问要跳上第 n 级台阶有多少种跳法？
*/

#include <stdio.h>

int factorial(int n)
{
  int ans;

  if(n == 1){
    ans = 1;
  } else if(n == 2){
    ans = 2;
  } else{
    ans = factorial(n-1) + factorial(n-2);
  }
  return ans;
}

/*
int fact(int n)
{
  if (n <= 2)
    return n;
  return fact(n - 2) + fact(n - 1);
}
*/

int main(void)

{
  int step = factorial(5);

  printf("%d", step);

  return 0;
}

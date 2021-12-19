//https://blog.csdn.net/wf19930209/article/details/79341939

/*
程序在计算5的阶乘的时候，先执行递推，当n=1或者n=0的时候返回1，再回推将计算并返回。由此可以看出递归函数必须有结束条件。
*/
#include <stdio.h>
int factorial(int n);

int main(void)
{
  int n = 5;

  printf("%d factorial = %d\n",n, factorial(n));

  return 0;
}

int factorial(int n)
{
  int result;

  if(n < 0){

    printf("wrong input\n");
    return 0;

  }else if(n == 1 || n == 0){

    return 1;

  }else{

    result = factorial(n-1) * n;

  }

  return result;

}

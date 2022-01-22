/*
6. Skriv en funktion som summerar alla tal i en array via rekursion. Dela arrayen i två
ungefär lika stora halvor och returnera summan av summorna av de två halvorna.
Beräkna summorna av halvorna via rekursion.
*/

/*
递归是重复调用函数自身实现循环。

递归循环中，遇到满足终止条件的情况时逐层返回来结束。迭代则使用计数器结束循环。

递归中一定有迭代,但是迭代中不一定有递归,大部分可以相互转换.

能用迭代的不用递归,递归调用函数,浪费空间,并且递归太深容易造成堆栈的溢出
*/

#include <stdio.h>

int sum(int size, int array[]) //递归在遇到基本情况时终止。
{
  if(size == 1){
    return array[0];
  }
  return array[size - 1] + sum(size - 1, array);
}

int main(int argc, char *argv[])
{
  int array[] = {1, 2, 3, 4, 5, 6};

  int result = sum(3, array) + sum(3, array + 3);

  printf("Result: %d\n", result);
  
  return 0;
}

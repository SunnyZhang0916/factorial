//5. Skriv en funktion som summerar alla tal i en array via iteration.

/*
递归循环中，遇到满足终止条件的情况时逐层返回来结束。迭代则使用计数器结束循环。


*/
int summan(int size, int array[])
{

  int sum = 0;

  for(i = 0; i < size; i++){  //迭代用重复结构
    //迭代在循环条件失败时终止

    sum += array[i]];

  }

  return sum;
}

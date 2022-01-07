/*
Skriv en funktion som summerar alla tal i en array via rekursion. Dela arrayen i två
ungefär lika stora halvor och returnera summan av summorna av de två halvorna.
Beräkna summorna av halvorna via rekursion.
*/

int sum_half(int size, int array[])
{
  if(size == 1){
    return array[0];
  }else{
    return array[size - 1] + sum_half(size-1, array);
  }

}

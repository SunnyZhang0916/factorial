#include <stdio.h>

void print_array (int n, int arr[]);

int main(void)
{
  const int n = 7;
  int a[] = {1, 2, 3, 4, 5, 6, 7};

  print_array (n, a);

  printf("\n");

  return 0;
}

void print_array (int n, int arr[])
{
/* Basfall: n == 0, inget sker i funktionen */
/* Rekursivt fall */
  if (n > 0) {

    printf("%d ", arr[0]);

    print_array (n - 1, &arr[1]);

  }
}

#include <stdio.h>
int main()
{
  int array[50], search, i, n;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d num\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)  
    {
      printf("%d is found at %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d is not found in array\n", search);

  return 0;
}

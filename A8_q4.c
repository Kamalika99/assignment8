#include <stdio.h>
void main()
{
  int n, i, j, count;
 int arr[7]={1,2,3,3,4,5,6};
 n=sizeof(arr)/sizeof(0);
  for (i = 0; i < n; i++)
  {
     count = 0;
    for (j = i+1; j < n; j++)
    {
      if (*(arr + i) == *(arr + j))
      {
        count++;
        break;
      }
    }
  
    if (count == 1)
    {
      printf("the repeated number is %d", *(arr + i));
    }
    }
  }


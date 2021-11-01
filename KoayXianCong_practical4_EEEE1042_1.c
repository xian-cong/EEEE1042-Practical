#include <stdio.h>
#define n 25 //number of rows
int main()
{
  int column,row,coef=1;
  for (row=0; row<=n; row++)
    {
      for (column=0; column<=row; column++)
	{
	  if (column == 0 || row == 0)
	    coef==1;
	  else
	    coef=coef*(row - column + 1)/column;
	  printf(" %d", coef);
	}
      printf("\n");
    }

  return 0;
}

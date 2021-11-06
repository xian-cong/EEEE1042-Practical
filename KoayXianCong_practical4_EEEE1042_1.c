#include <stdio.h>
#define N 10

int main() 
{
  int a[N][N]; //a[0][0] up to a[N-1][N-1]
  int i,j; //iterator for rows and columns
  
  a[0][0] = 1; //set first row to be only 1
  printf(" %d\n", a[0][0]); 

  for (i=1; i<N; i++) //loop for row
  {
    a[i][0] = 1; //set first row first element to be 1
    printf(" %d", a[i][0]);

    
    for (j=1; j<i; j++) //loop for column
    {
      a[i][j]=a[i-1][j]+a[i-1][j-1]; //set number = upper row number-1 + upper row number
      printf(" %d",a[i][j]);
    }

    a[i][i] = 1; //set last element to be 1
    printf(" %d\n",a[i][i]);

  }

  return 0;
}

// #include <stdio.h>
// #define n 25 //number of rows
// int main()
// {
//   int column,row,coef=1;
//   for (row=0; row<=n; row++)
//     {
//       for (column=0; column<=row; column++)
// 	{
// 	  if (column == 0 || row == 0)
// 	    coef==1;
// 	  else
// 	    coef=coef*(row - column + 1)/column;
// 	  printf(" %d", coef);
// 	}
//       printf("\n");
//     }

//   return 0;
// }
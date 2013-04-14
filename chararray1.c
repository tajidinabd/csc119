 #include <stdio.h>

 

void main()

{

      int i, j, a[3][4];

      for(i = 0; i <= 2; i = i + 1)

      {

            for(j = 0; j <= 3; j = j + 1)

            {

                  a[i][j] = 7;

                  printf("a[%d][%d] = %d\t", i, j, a[i][j]);

            }

                  printf("\n");

      }

}
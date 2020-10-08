#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int i,j;	
  int a[3][3] = { 29, 0, -1, 3, 0, 13, -8, 0, 29  };
  printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
  printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
  printf("%d %d %d\n", a[2][0], a[2][1], a[3][2]);
  
  for (i=0; i<3; i++)
  for (j=0; j<3; j++)
{
	if (a[i][j]==0);

	printf ("\n %d",a[i][j]);
}
  
  


    
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int R[9];
	int i,max,x,y;
	
	for (i=0; i<9; i++)
	{	
		printf ("R[%d]=", i);
		scanf ("%d", &R[i]);
	}
	for (i=0; i<9; i++)
	printf ("%d", R[i]);
	
	
	max = R[0];
	for (i=0; i<9; i++)
	if (max<R[i])
	{
		max = R[i];
		y=i;
	}
	printf ("\n max element= %d ", max);
	printf ("\n ostaniy element= %d",R[8]);

	
	x=R[8];
	R[8]=max;
	max=x;
	for (i=0; i<9; i++)
	printf (" \n noviy massuv= %d", R[i]);
	return 0;
}

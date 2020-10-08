#include <stdio.h>
#define M 4
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int a[N][M];
    int sum, i, j;
    srand(time(NULL));
    for (i=0; i<M; i++) ;
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            a[i][j] = rand() % 10;
             printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; i += 2)
    {
        sum = 0;
        for( j = 0; j < 5; j++)
        sum += a[i][j];
        printf("\n %5d", sum);
    }
	return 0;
}

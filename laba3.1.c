#include <stdio.h>
#define M 3
#define N 8
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
            if (a[i][j]%2==0) sum+=a[i][j];
        }
        printf("\n");
    }
     printf("\nResult: %ld",sum);
    

    		
		
   

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *A(int n) {
    return (double *)malloc(n*sizeof(double));
}
void am(int *a, int n) {

    int i;
    for(i = 0; i < n; i++){
    *(a + i) = rand()%30*1.12;}}
void ap(int *a, int n) {
    int i;
    for (i = 0; i < n; i++){
    printf("%d ", *(a + i));}}


void m(int *a, int n) {
    int i, j,ch;
    int d=0;
	int k=0;
float ser;
    for (i = 0; i < n; i++){ch=*(a + i);
    if((ch>0)&&(ch<100)){
   k++;d=d+ch;}}
ser=d/k;
    printf("\nkilkist =%d \nser=%.2f",k,ser);}
int main(){

    int *a;
    int n;
     printf("vvedit n");
    scanf("%d", &n);
a = A(n);
am(a, n);
ap(a, n);
m(a, n);

    return 0;}

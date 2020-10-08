#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,g=0,j,s=0,t;
    printf("Vvedit n=");
    scanf("%d",&n);
    int a[n],*p;
    p=a;
    printf("Array:");
    for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{scanf("%d", &a[i][j]);}}

printf("\n new Array:");
for(i=0;i<n;i++){printf("\n");

for(j=0;j<n;j++)

 {   printf("%d ",a[i][j]);

    }   }

int m;

for(g=0;g<n;g++){
for(i=0;i<n-1;i++){
for(j=0;j<n-1;j++){

if (i==j){
t=*(a+n*(i+1)+j+1);
m=*(a+n*i+j);
    if(t<m){

*(a+n*(i+1)+j+1)=t;
*(a+n*i+j)=c;}}

}}

 }  

printf(“\n vidpovid \n”);
for(i=0;i<n;i++){printf(“\n”);
for(j=0;j<n;j++){
t=*(a+n*i+j);
printf(“%d ”,t);

}}

	return 0;
}

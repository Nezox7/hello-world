#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[100];
int i,k=0,n,j;
   printf("name: ");
   gets(s);
   n= strlen(s);
    for(i=0; i<strlen(s); i++){
     if(s[i]=='a') 
	 {
	 k++;
	 } 
	 else
    if (s[i]==' ') { 
	for (j=i+1;j<n;j++){
	if (s[j]==' ') {
	printf("%c", s[j]); 
	j=n;
	}
	s[j]=toupper(s[j]);
	printf ("%c",s[j]);}
	for (j=0;j<i;j++){
	s[j]=toupper(s[j]);
	printf ("%c", s[j]);
	}}
	printf("\nLine length =  %d",n);
    printf("\nkilkist a =  %d", k);
}


	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
 int i=0,j;
 char ar[20],a;
 do
 {   scanf("%c",&a);
     ar[i]=a;
     i++;
 }while(a!='\n');
 for(j=0;j<i;j++)
 printf("%c",ar[j]);
	return 0; }
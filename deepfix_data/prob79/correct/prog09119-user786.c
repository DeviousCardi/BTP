# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main() {
 int n,*time,i;
 scanf("%d",&n);
 time=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++) {
     scanf("%d",time + i); }
 printf("&s",time);
 return 0; }
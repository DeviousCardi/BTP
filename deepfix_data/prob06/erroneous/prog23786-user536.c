#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,k,t=-1;
    int m,n,x,y;
    int*d;
    int*a;
    scanf("%d",&m);
		scanf("%d",&n);
	 d = (int*)malloc((m)*sizeof(int));
	 a =(int*)malloc((n)*sizeof(int));
		scanf("%d",&x);
		scanf("%d\n ",&y);
	for(i=0;i<m;i++)
	scanf("%d",&d[i]);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++) {
	    for(i=0;i<m;i++) {
	        if(a[j]-x<= d[i] && d[i]<= a[i] +y) {
	            printf("%d%d",j+1,i+1);
	            break; } }
	    printf("\n"); } }
	return 0; }
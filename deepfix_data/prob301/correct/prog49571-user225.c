#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,mode;
	int a[100000],count[10000];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	 for(i=0;i<n;i++)
	 count[i]=1; {
	     for (j=1;j<n-1;j++) {
	         if ( a[i]>=a[j])
	         { count[i]= count[i]+1 ; }
	         else
	         {count[i]=count[i];} } }
    for (i=0;i<n;i++) {
        for(j=0;j<=n-1;j++) {
            if ( count[i] <= count[j]) {
               break; }
            else {
                 mode = a[j]; } } }
    printf("%d",mode);
    return 0; }
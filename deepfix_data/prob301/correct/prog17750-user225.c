#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,mode;
	int a[10000],count[10000];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	 for(i=0;i<n;i++)
	 count[i]=0; {
	     for (j=0;j<n;j++) {
	         if ( a[i]==a[j])
	         { count[i] = count[i]+1 ; }
	         else
	         {count[i]=count[i];} } }
    for (i=0;i<n;i++) {
        for(j=0;j<=n-1;j++) {
            if ( count[i] < count[j]) {
               break; }
            else {
                 mode = a[i]; } } }
    printf("%d",mode);
    return 0; }
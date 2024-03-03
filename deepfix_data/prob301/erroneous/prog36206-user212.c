#include <stdio.h>
#include <stdlib.h>
int main() {int n,i,j;
 for (i=0;i<n;i++) {
    for (j=i+1;j<n;j++){
        if(a[i]==a[j]) count++; }
    if (count>max) { max=count; b=a[i];} count=0; }
printf ("%d",b);
	return 0; }
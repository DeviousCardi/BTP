#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k,count,i,j,m;
    scanf("%d",&n);
    int a[100];
    while(n>0) {
        k=n%10;
        a[i]=k;
        i++;
        n=n/10; }
      for(l=0;l<i/2;l++) {
        if(a[l]==a[i-l-1]) ;
        else
        count++; }
    if(count==0)
    printf("YES");
    else
    printf("NO");
	return 0; }
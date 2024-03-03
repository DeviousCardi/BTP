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
      for(k=0;k<i/2;k++) {
        if(a[k]==a[i-k-1]) ;
        else
        count++; }
    if(count==0)
    printf("YES");
    else
    printf("NO");
	return 0; }
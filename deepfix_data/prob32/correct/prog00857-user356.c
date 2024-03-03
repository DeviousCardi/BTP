#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[19],flag=0;
     scanf("%d",&n);
     for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    a[n]=a[n-1]+1;
    for(i=0;i<n;i++) {
        if(a[i]<a[i-1])
            {if(a[i]<a[i+1])
            flag=1;} }
    if(flag==1)
    printf("Yes");
    else
    printf("No");
	return 0; }
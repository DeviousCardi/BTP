#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,max=0,count=0,c1=0,c2=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++) {
        if(a[i]==a[i+1])
        count++;
        else
        {   if(count==max) {
                c1++;
                c2=a[i]; }
            if(count>max)
            max=count;
            count=0; } }
    printf("\n");
    if(c1==0)
    printf("%d",max+1);
    else
    printf("%d",c2);
	return 0; }
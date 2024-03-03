#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n]; int b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=0;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]){
                b[i]++;
                sum++; }
    printf("%d\n",sum);
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
	return 0; }
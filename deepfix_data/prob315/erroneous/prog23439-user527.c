#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a[1000],b[1000],j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
            b[i]=0;
            for(j=i+1;j<n;j++)
                if(a[i]>a[j])
                    b[i]++;
            for(i=0;i<n;i++)
                count+=b[i]; }
    printf("%d",count);
    for(i=0;i<n;i++)
    printf("%d",b[i]);
	return 0; }
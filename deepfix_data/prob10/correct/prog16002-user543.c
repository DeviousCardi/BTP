#include<stdio.h>
int main() {
    int i,j,max=1,maxtill=1,n;
    scanf("%d\n",&n);
    int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    { max=1;
            for(j=0;j<n-i+1;j++) {
                if(a[i+j]>a[i])
                    max++; }
    if(maxtill<max)
        maxtill=max; }
printf("%d",maxtill);
    return 0; }
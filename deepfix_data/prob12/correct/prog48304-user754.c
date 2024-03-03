#include <stdio.h>
int main(){
    int n,i,j,min=201;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2*n;i++)
        for(j=i+1;j<2*n;j++)
            if(a[i]==a[j])
                if((i-j)<min)
                    min=i-j;
    printf("%d",min);
    return 0; }
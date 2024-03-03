#include <stdio.h>
#include <stdlib.h>
int main() {
    int m,n,l,r;
    scanf("%d%d%d%d",&m,&n,&l,&r);
    int *s=malloc(m*sizeof(int)),
        *t=malloc(n*sizeof(int));
    for(i=0;i<m;i++)
        scanf("%d ",& *(s+i));
    for(j=0;j<n;j++)
        scanf("%d ",& *(t+j));
    int count=0,x=0;
    for(j=0;j<n;j++)
        {for(i=x;i<m;) {
            if(*(t+j)-l > *(s+i)) {
                i++;continue; }
            if(*(t+j)+r < *(s+i)) {
                i++; continue; }
            count++; }
        x=i+1; }
    printf("%d\n",count);
    return 0; }
#include <stdio.h>
int main() {
    int n,m,i,j,temp1,temp2,max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        temp2=0;
        for(j=0;j<m;j++) {
           scanf("%d",&temp1);
           temp2=temp2+temp1; }
        if(temp2>max)
            max=temp2; }
    printf("%d",max);
    return 0; }
#include <stdio.h>
int main() {
    int n,m,i,j,a,max=0,s1;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0,s1=0;j<m;j++) {
            scanf("%d",&a);
            s1=s1+a; }
        if(max<s1)
            max=s1;
        printf("\n"); }
    printf("%d",max);
    return 0; }
#include <stdio.h>
int main() {
    int doors,heap,n,m,i,mx,j;
    mx=0;
    scanf("%d%d\n",&doors,&heap);
    for(i=1;i<=doors;i++){
        m=0;
        for(j=1;j<=heap;j++){
            if(j==heap)
            scanf("%d\n",&n);
            else
            scanf("%d",&n);
            m=m+n; }
        if(m>mx)
        mx=m; }
    printf("%d",mx);
    return 0; }
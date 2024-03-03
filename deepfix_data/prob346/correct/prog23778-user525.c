#include <stdio.h>
int main(){
    int n,i;
    int m;
    scanf("%d",&n);
    int ar1[n];
    int count;
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar1[i]); }
    for(m=0;m<=99;m++)
    {count=0;
        for(i=0;i<=n-1;i++)
        if(ar1[i]==m)
        count=count+1;
        for(;count>=1;count--) {
            printf("%d",m); } }
    printf("end");
    return 0; }
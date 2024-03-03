#include <stdio.h>
int main(){
    int n,m;
    int i;
    i=1;
    int count=0;
    scanf("%d %d",&n,&m);
    for(;i-1<m;i++)
    {if(i!=1&&m%i==0) {
            count=count+1;
        }; }
    printf("%d",count);
    if(count==n)
        printf("YES");
    else{printf("NO");};
    return 0; }
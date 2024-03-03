#include <stdio.h>
int main()
{   int m,n,i,j,g;
    scanf("%d %d",&n,&m);
    int max=0;
    for(i=0;i<n;i++){
        int count =0;
        for(j=0;j<m;j++){
            scanf("%d",&g);
            count=count+g;
            if(count>max){
                max=count; } } }
    printf("%d",max);
    return 0; }
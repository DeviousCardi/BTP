#include <stdio.h>
int main(){
    int x[400],i;
    int n;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&x[i]); }
    int temp=0,j,count;
    for(i=0;i<2*n;i++)
    {count=0;
        for(j=i+1;j<2*n;j++)
        {count++;
            if(x[i]==x[j])
            break; }
        if(i==0) {
            temp=count; }
        if(count<temp) {
            temp=count; } }
    printf("%d",temp);
    return 0; }
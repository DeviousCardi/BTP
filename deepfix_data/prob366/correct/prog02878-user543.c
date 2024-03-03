#include <stdio.h>
int main(){
    int i,j,n,d,min=200;
    scanf("%d\n",&n);
    int s[2*n+1];
    for(i=0;i<2*n+1;i++)
        scanf("%d",&s[i]);
    for(i=0;i<2*n+1;i++) {
        for(j=1;j<2*n+1-i;j++) {
            if(s[i]==s[i+j])
                d=j; }
    if(min<d)
    min=d; }
    printf("%d",min);
    return 0; }
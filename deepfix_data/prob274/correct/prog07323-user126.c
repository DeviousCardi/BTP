#include <stdio.h>
int main(){
    int n,c,i,j,count,l,m;
    scanf("%d",&n);
    int room[n+1],array[n+1];
    array[0]=-1;
    c=1;
    count=0;
    m=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&room[i]); }
    for(i=1;i<=n;i++) {
        j=room[c];
        array[i]=j;
        c=j;
        for(l=0;l<i;l++) {
            if(array[i]==array[l]) {
            m=m+1;
            break; }
            else
            m=0; }
        count=count+1;
        if(m>0)
        break; }
    printf("%d %d",count,m);
    return 0; }
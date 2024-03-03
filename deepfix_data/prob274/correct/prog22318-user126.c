#include <stdio.h>
int main(){
    int n,a,b,c,i,j,count,l,m;
    scanf("%d",&n);
    int room[n+1],array[n+1];
    room[0]=1;
    array[0]=-1;
    c=1;
    m=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&room[i]); }
    for(i=1;i<=n;i++) {
        j=room[c];
        array[i]=j;
        c=j;
        for(l=i-1;l>=0;l--) {
            if(array[i]==array[l])
            m=m+1; }
        if(m>0)
        break;
        count=count+1; }
    printf("%d %d",count,array[count-1]);
    return 0; }
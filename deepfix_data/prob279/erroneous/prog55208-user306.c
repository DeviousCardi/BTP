#include <stdio.h>
int main() {
    int i,j,k,n,repeat,count,inc,miss;
    int set[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&set[i]); }
    for(j=0;j<n;j++){
        count=0;
        inc=0;
        for(k=1;k<=n;k++){
            if(k==set[j])
            count=count+1;
            if(count==2)
            repeat==set[j];
            if(k!=set[j])
            inc=inc++;
            if(inc==n)
            missing=set[j]; } }
    printf("%d\n%d",repeat,miss);
    return 0; }
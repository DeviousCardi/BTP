#include <stdio.h>
int main() {
    int i,j,k,n,repeat,count,inc,missing;
    scanf("%d\n",&n);
    int set[n];
    for(i=0;i<n;i++){
        scanf("%d ",&set[i]); }
    for(k=1;k<=n;k++){
        count=0;
        inc=0;
        for(j=0;j<n;j++){
            if(k==set[j])
            count=count+1;
            if(count==2)
            repeat=k;
            if(k!=set[j])
            inc=inc+1;
            if(inc==n)
            missing=k; } }
    printf("%d\n%d",repeat,missing);
    return 0; }
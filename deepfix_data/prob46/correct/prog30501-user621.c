#include <stdio.h>
int main(){
    int m,n,i,r,count=0;
    scanf("%d%d",&m,&n);
    for(i=2;i<n;i++) {
        r=n%i;
        if(r==0) {
            count=count+1; } }
    if(count==m) {
        printf("YES"); }
    else
    printf("NO");
    return 0; }
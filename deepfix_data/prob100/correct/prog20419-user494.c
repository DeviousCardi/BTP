#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,max=-INT_MAX,min=INT_MAX,input;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&input);
            if(max<input) {
                max=input; }
            if(min>max) {
                min=max; } } }
    printf("%d",min);
    return 0; }
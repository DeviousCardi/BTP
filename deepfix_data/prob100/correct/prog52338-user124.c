#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,max,j,x,y;
    max=-1111111;
    y=11111111;
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&x);
            if (x>max){
                max=x; } }
        if (max<y){
            y=max; } }
    printf("%d",y);
    return 0; }
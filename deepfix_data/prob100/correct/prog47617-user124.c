#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,max,j,x,y;
    y=INT_MAX;
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=0;i<m;i++){
        max=INT_MIN;
        for (j=0;j<n;j++){
            scanf("%d",&x);
            if (x>max){
                max=x; } }
        if (max<y){
            y=max; } }
    printf("%d",y);
    return 0; }
#include <stdio.h>
int main(){
    int a[4];
    int i;
    int sum=2016;
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
        for(i=0;;i++){
            if(sum%(a[0]+a[1]+a[2]+a[3])==0)
            printf("%d",sum);
            else
            sum =sum+1; }
    return 0; }
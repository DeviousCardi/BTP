#include <stdio.h>
int main(){
    int Y[4];int x,sum;
    for(int i=0;i<=3;i++) {
        scanf("%d",&Y[i]);
        printf("%d",Y[i]); }
    printf(" ");
    sum=Y[0]+Y[1]+Y[2]+Y[3];
    if(2016%sum==0) {
        printf("2016");
        return 0; }
    for(x=1;x<=36;x++) {
        if((2016+x)%sum==0) {
            break; } }
        printf("%d",2016+x);
    return 0; }
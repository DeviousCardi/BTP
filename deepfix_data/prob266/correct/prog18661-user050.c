#include <stdio.h>
int main(){
    int Y[3];int x,y,sum;
    for(int i=0;i<=3;i++) {
        scanf("%d",&Y[i]); }
    sum=Y[0]+Y[1]+Y[2]+Y[3];
    if(2016%sum==0) {
        printf("2016");
        return 0; }
    for(x=1;x<=28;x++) {
        if((2016+x)%sum==0) {
            break; } }
    for(y=1;y<=28;y++) {
        if((2016-y)%sum==0) {
            break; } }
    if(x<y) {
        printf("%d",2016+x); }
    else {
        printf("%d",2016-y); }
    return 0; }
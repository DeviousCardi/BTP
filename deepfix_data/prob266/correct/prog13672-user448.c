#include <stdio.h>
int main(){
    int i,j,n ,r;
    char y;
    int sum=0;
    for (i=0;i<4;i++){
        scanf("%c",&y);
        sum = 'y'-'0'+sum; }
    r=2016%sum;
    if (r==0){
        printf("2016"); }
    if (r>sum/2){
        printf ("%d",2016-r); }
    else {
        printf("%d",2016+r); }
    return 0; }
#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int ar[2*n];
    for(int i=0;i<(2*n);i++) {
        scanf("%d",&ar[i]); }
    int min;
    for(int i=0;i<(2*n);i++) {
        int d=0;
        int flag=0;
        for(int j=0;(j<(2*n))&&j!=i;j++) {
            if(ar[j]==ar[i]) {
                d=j-i;
                flag=1;
                break; } }
        if(d<0) {
            d=0-d; }
        if(i==0) {
            min=d; }
        if((flag==1)&&(d<min)) {
            min=d; } }
    printf("%d",min);
    return 0; }
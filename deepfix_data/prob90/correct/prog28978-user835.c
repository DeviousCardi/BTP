#include <stdio.h>
int main(){
    int d,i,h,k;
    int a[500];
    scanf("%d",&d);
    for(i=0;i<d;i++) {
        scanf("%d",&a[i]); }
    for(h=0;h<d;h++) {
        for(k=0;k<d;k++) {
            if(a[h]+a[k]==d)
            break;
            else {
                printf("unlucky"); } } }
    return 0; }
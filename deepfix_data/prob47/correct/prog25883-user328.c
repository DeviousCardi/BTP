#include <stdio.h>
#include <stdlib.h>
float catalan(float x) {
    float sum=0;
    if(x==0) {
        return 1; }
    if(x==1) {
        return 1; }
    return sum=sum+((2*(2*x-1))/(x+1))*catalan(x-1); }
int main() {
     int t,i;
     float s,a[t];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%f\n",&a[i]); }
    for(i=0;i<t;i++) {
    s= catalan(a[i]);
    printf("%.0f\n",s); }
    return 0; }
#include <stdio.h>
#include <stdlib.h>
float catalan(float x) {
    if(x==0) {
        return 0; }
    if(x==1) {
        return 1; }
    return ((2*(2*x-1))/(x+1))*catalan(x-1); }
int main() {
     int t,i,j;
     float s,a[t];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%f\n",&a[i]); }
    for(i=0;i<t;i++)
    { s=0;
        for(j=1;j<=a[i];j++) {
      s=s+ catalan(j); }
    printf("%.0f\n",s); }
    return 0; }
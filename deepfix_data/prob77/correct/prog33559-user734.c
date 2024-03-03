#include <stdio.h>
int main() {
    int b,i,x,y;
    scanf("%d",&b);
    int a[b];
    scanf("%d",&a[0]);
    for(i=1;i<b;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<b;i++) {
        x = a[0];
        if(x>a[i])
        continue;
        else {
        x=a[i];
        y=i; } }
    printf("%d\n%d\n",x,y);
    printf("end");
    return 0; }
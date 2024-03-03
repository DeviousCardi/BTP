#include <stdio.h>
int main(){
    int a[4],i,s;
    for(i=0;i<4;i++) {
        scanf("%d",&a[i]);
        s=a[0]+a[i];
        a[0]=a[i];
        printf("%d",a[i]); }
    printf("%d",s);
     for(i=2016;;i++) {
        if(i%s==0) {
            printf("%d",i);
            break; } }
    return 0; }
#include <stdio.h>
int main(){
    int a[4],i,s;
    for(i=0;i<4;i++) {
        scanf("%d",&a[i]);
        s=a[0]+a[i];
        a[0]=a[i];
        printf("%d\n",a[i]); }
    printf("%d\n",s);
    return 0; }
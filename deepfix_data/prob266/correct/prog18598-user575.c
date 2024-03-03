#include <stdio.h>
int main(){
    int a[4],i,s,l=0;
    for(i=0;i<4;i++) {
        scanf("%d",&a[i]);
        s=l+a[i];
        l=a[i];
        printf("%d\n",a[i]); }
    printf("%d\n",s);
    return 0; }
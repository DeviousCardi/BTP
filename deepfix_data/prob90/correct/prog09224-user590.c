#include <stdio.h>
int main() {
    int l,n;
    scanf("%d \n %d",&l,&n);
    int c,a[n];
    for(int i=0;i<n;i++) {
       scanf("%d",&c);
       if(c>=0 && c<500)
       a[i]=c;
       else
       i--; }
    int d=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[j]== (l-a[i]))
            d++; } }
    if(d>0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }
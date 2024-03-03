#include <stdio.h>
int main() {
 int i=0,p,w,a[i],max,min,temp;
 scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d",&w);
        a[i]=w;
        if (max<w) {
        max=w; }
     else if(min>=w){
            min=w; } }
        temp=max;
        max=min;
        min=temp;
    printf("end");
    return 0; }
#include <stdio.h>
int main(){
    int a[2];
    int b[2];
    for(int i=0;i<2;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<2;i++)
        scanf("%d",&b[i]);
    float slope=0;
    if(a[0]==b[0]) {
            printf("inf"); }
    else {
          float x=(float)b[1]-a[1];
          float y=(float)b[0]-a[0];
          slope=x/y;
          printf("%0.2f",slope); }
    return 0; }
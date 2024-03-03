#include <stdio.h>
int main(){
    int i,j,b=0;
    int a[4];
    int sum=0;
    for(i=0;i<4;i++) {
        scanf("%d",&a[i]); }
     for(i=0;i<4;i++) {
        sum=sum+a[i]; }
    printf("%d\n",sum);
     for(j=2016;1;j++) {
        if (j%sum==0){
            printf("%d",j);
            break; } }
      return 0; }
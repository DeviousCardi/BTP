#include <stdio.h>
int main(){
    int a[10000],n,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
     temp=a[0];
    for(i=0;i<n;i++) {
       for(j=i;j<n;j++) {
            if(temp>a[j]) {
        temp=a[j];
    }}
    a[i]=temp;
    temp=a[i+2]; }
       for(i=0;i<n;i++)
        {printf("%d ",a[i]);}
    printf("end");
    return 0; }
#include <stdio.h>
int main() {
    int num,a[1000],i,jmin,jmax,temp;
    scanf("%d\n",&num);
    for(i=0;i<num;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<num;i++) {
        if(a[i]<a[i-1])
        jmin=i; }
    for(i=0;i<num;i++) {
        if(a[i]>a[i-1])
        jmax=i; }
    temp=a[jmin];
    a[jmin]=a[jmax];
    a[jmax]=temp;
    for(i=0;i<num;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }
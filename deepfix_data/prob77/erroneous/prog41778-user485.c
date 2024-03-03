#include <stdio.h>
int main() {
    int num,a[1000],i,jmin=0,jmax=0,temp=0;
    scanf("%d",&num);
    printf("\n");
    for(i=0;i<num;i++)
    scanf("%d ",&a[i]);
    for(i=1;i<num;i++) {
        if(a[i]<a[jmin])
        jmin=i; }
    for(i=1;i<num;i++) {
        if(a[i]>a[max])
        jmax=i; }
    temp=a[jmin];
    a[jmin]=a[jmax];
    a[jmax]=temp;
    for(i=0;i<num;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }
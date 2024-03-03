#include <stdio.h>
int main() {
    int n1,n2,i,j,count=0,min;
    scanf("%d",&n1);
    int a[20],b[20];
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2)  ;
    for(j=0;j<n2;j++) {
        scanf("%d",&b[j]); }
    min=a[0];
    for(i=0;i<n1;i++)
        if(a[i]<min)
            min=a[i];
    for(i=0;i<n2;i++)
        if(b[i]!=min)
            count++;
    if(count==n2)
        printf("%d",min);
    else
        printf("NO");return 0; }
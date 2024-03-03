#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,a[20],b[20],i,j,min,c;
    c=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&a[n1]); }
    scanf("%d",&n2);
    for(j=0;j<n2;j++) {
        scanf("%d",&b[n2]); }
    min=1000;
    for(i=0;i<n1;i++) {
        if(a[i]<min)
        min=a[i]; }
    for(j=0;j<n2;j++) {
        if(b[j]!=min)
        {c++;}
        else
        {printf("%d",min);
        break;} }
    if(c==n2)
    printf("%d",min);
    return 0; }
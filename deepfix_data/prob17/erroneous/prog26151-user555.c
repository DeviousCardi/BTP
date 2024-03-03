#include<stdio.h>
int main(0) {
    int n1,n2,i,j,ctr;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n1;i++)
    {   ctr=0;
        if(b[0]==a[i]) {
            for(j=0;j<n2;j++) {
                if(a[i+j]==b[j])
                    ctr++;
                else
                    break; } }
        if(ctr==n2)
        break; }
    if(ctr==n2)
    printf("YES");
    else
    printf("NO"); }
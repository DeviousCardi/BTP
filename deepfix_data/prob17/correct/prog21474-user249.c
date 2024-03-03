#include<stdio.h>
int main() {
    int n1,n2,i,j,k,flag;
    scanf("%d",&n1);
    int a1[n1];
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    for(i=0;i<n1;i++) {
        if(a2[0]==a1[i]) {
             flag=0;
            for(j=0;j<n2;j++) {
                k=i;
               flag=flag+(a1[k]==a2[j]);
               k++; } }
        printf("%d",flag); }
    return 0; }
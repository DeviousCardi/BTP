#include<stdio.h>
int main() {
    int n1,n2,i,j,flag;
    scanf("%d",&n1);
    int a1[n1];
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    for(i=0;i<n1;i++) {
        flag=0;
        if(a2[0]==a1[i]) {
            for(j=0;j<n2;j++) {
               flag=flag+(a1[i]==a2[j]); } }
        if(flag==n2) {
            printf("YES");
            break; }
        else if(flag!=n2&&i==n1-1)
            printf("NO"); }
    return 0; }
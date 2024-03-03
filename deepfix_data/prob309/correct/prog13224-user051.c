#include <stdio.h>
int main() {
    int n,j,i,count,A[1000],flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d,",&A[i]);
    for(i=0;i<n;i++) {
        for(j=0,count=0;j<n && A[i]!=0;j++) {
            if(A[i]==A[j]) {
                count=count+1;
                A[j]=0; } }
        if(A[i]!=count) {
            flag=0;
            break; } }
    if(flag==1)
        printf("Yes");
    else
        printf("No");
    return 0; }
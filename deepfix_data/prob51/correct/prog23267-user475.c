#include <stdio.h>
int main() {
    int n,k,i,j,temp;
    scanf("%d %d",&n,&k);
    int ch[n];
    for(i=0;i<n;i++)
        scanf("%d",&ch[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(ch[j]<ch[j+1]) {
                temp=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=temp; } } }
    for(i=0;i<n;i++)
        printf("%d",ch[i]);
    return 0; }
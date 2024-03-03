#include <stdio.h>
int main() {
    int n,k,i,j,temp;
    scanf("%d %d\n",&n,&k);
    int ch[n];
    for(i=0;i<n;i++)
        scanf("%d\n",&ch[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(ch[j]<ch[j+1]) {
                temp=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=temp; } } }
    printf("%d",ch[k-1]);
    return 0; }
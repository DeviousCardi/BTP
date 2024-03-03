#include <stdio.h>
int main() {
    int n,flag=0;
    scanf("%d",&n);
    int gseq[n],rseq[n+1];
    rseq[0]=1;
    for(int i=0;i<n;i++)
    scanf("%d",&gseq[i]);
    for(int i=1;i<=n;i++)
    rseq[i]=gseq[(rseq[i-1])-1];
    for(i=0;i<n;i++) {
        for(int j=i+1;j<=n;j++) {
            if(rseq[j]==rseq[i]) {
                flag=1;
                break; } }
        if(flag==1)
        break; }
    printf("%d %d",j,(j-i));
    return 0; }
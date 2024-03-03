#include <stdio.h>
int main() {
    int n,A[100],B[200],k,count=0,temp=0,K=0,t=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d ",A[i]); }
    for(int i=1,k=0;i<=n;i++,k++) {
        B[k]=i;
        i=A[i];
        count=count+1
        for(int j=0;j<=k;j++) {
            if(B[j]==A[i]) {
                temp=temp+1;
                if(temp==1)
                t=count;
                if(temp==2) {
                K=count;
                break; } } }
        if((t!=0)&&(K!=0))
        break; }
    printf("%d %d",t,K);
    return 0; }
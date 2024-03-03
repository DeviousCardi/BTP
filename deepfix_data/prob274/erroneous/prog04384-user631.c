#include <stdio.h>
int main(){
    int n,a[100];
    int t,k;
    int pr[100000],tmp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    pr[0]=1;
    for(int i=1;i<n;i++){
        tmp=pr[i-1];
        pr[i]=a[tmp-1];
        printf("%d  ",pr[i]); }
    for(int i=0;i<n;i++){
        for(t=i+1;t<n;j++){
            if(pr[i]==pr[t]){
                printf("%d",t);
                k=t-i;
                printf("%d",k); } } }
    return 0; }
#include<stdio.h>
int main() {
    int n,k; scanf("%d %d",&n,&k);
    int a[n],count[k+1],start_in[k+1],output[n];
    for (int i=0;i<k+1;i++) count[i]=0;
    for (int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            count[a[i]]+=1; }
    int total=0;
    for (int i=0;i<k+1;i++) {
            int oldcount=count[i];
            start_in[i]=total;
            total+=oldcount; }
    for (int i=0;i<k+1;i++) {
            int j,lim_j;
            if (i==k) {lim_j=n-start_in[k];}
            else lim_j=start_in[i+1]-start_in[i];
            int p=start_in[i];
            for (int j=0;j<lim_j;j++) {
                    output[p]=i;
                    p+=1;
                }printf("%d \n",p); }
    for (int i=0;i<n;i++) printf("%d ",output[i]);
    return 0; }
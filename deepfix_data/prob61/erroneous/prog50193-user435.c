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
            int p=start_in[i];
            for (int j=0;j<start_in[i+1]-start_in[i];j++) {
                    output[p]=i;
                    p+=1; printf("%d \n",p) } }
    for (int i=0;i<n;i++) printf("%d ",output[i]);
    return 0; }
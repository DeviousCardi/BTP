# include <stdio.h>
int main() {
    int i,j,n,k;
    int l=0;
    int count[1000],output[1000],a[1000];
    scanf ("%d %d",&n,&k);
    for(i=0;i<n;i=i+1)
    scanf ("%d",&a[i]);
    for(i=0;i<=k;i=i+1)
    count[i]=0;
    for (j=0;j<=k;j=j+1) {
      for(i=0;i<n;i=i+1) {
            if (a[i]==j)
            count[j]=count[j]+1; } }
    for (i=0;i<=k;i=i+1) {
        for (j=0;j<count[i];j=j+1) {
            output[l]=i;
            l=l+1; } }
    for(i=0;i<n;i=i+1) {
        printf ("%d ",output[i]); }
    return 0; }
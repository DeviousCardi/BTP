#include <stdio.h>
int arr[100]={0};
int n,i;
int getMaxLessThan(int upperLimit) {
    int i,j,max;
    for(i=0;i<n;i++) {
        if(max<arr[i]&&arr[i]<upperLimit) {
            max=arr[i]; } }
    return max; }
int main() {
    int i,k,l,j,tmp;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]);
        a[i]=arr[i]; }
        for(j=1;j<n;j++) {
            if(a[j-1]>a[j])
            {   tmp=a[j-1];
                a[j-1]=a[j];
                a[j]=tmp; } }
        int c=a[n-1];
        printf("%d\n",c);
        for(l=1;l<k;l++)
        {   c=getMaxLessThan(c);
            printf("%d\n",c); }
    return 0; }
#include<stdio.h>
int main() {
        int n,count=0,c,k,i,j;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        c=a[0];
        for(k=0;k<n;k++) {
                b[k]=c;
                c=a[b[k]]; }
        for(i=0;i<n;i++) {
            for(j=i;j<n;j++) {
                if((b[i]==b[j])&&(i!=j)) {
                count=1;
                break; } }
            if(count==1)
            break; }
        printf("%d %d",j,j-i);
        return 0; }
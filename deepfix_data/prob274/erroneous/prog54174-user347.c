#include<stdio.h>
int mian() {
        int n,count,c;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        c=a[0];
        for(int i=0;i<n;i++) {
                b[i]==c;
                c=a[b[i]]; }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if((b[i]==b[j])&&(i!=j)) {
                count=1;
                break; } }
            if(count==1)
            break; }
        printf("%d %d",j,j-i);
        return 0; }
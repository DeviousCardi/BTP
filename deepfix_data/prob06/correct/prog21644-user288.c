#include <stdio.h>
#include <stdlib.h>
int main() {
        int n,m,x,y,i=0,j=0,count=0;
        scanf("%d %d %d %d\n",&n,&m,&x,&y);
        int a[n],b[m],pvests[n],psoldiers[m];
        for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
        for(i=0;i<m;i++)
        scanf("%d ",&b[i]);
        i=0;j=0;
         if((n==0)||(m==0)) {
        printf("0"); }
     if(n>0&&m>0) {
         while(i<n&&j<m) {
              if((a[i]-x)<=b[j]&&(a[i]+y)>=b[j]) {
                 pvests[count]=i+1;
                 psoldiers[count]=j+1;
                 i++;
                 j++;
                 count++; }
              else if((a[i]+y)<b[j]) {
                 i++; }
              else if((a[i]-x)>b[j]) {
                  j++; } }
            printf("%d\n", count);
     for(i=0;i<count;i++) {
        printf("%d %d\n",pvests[i],psoldiers[i]);
    }}
        return 0; }
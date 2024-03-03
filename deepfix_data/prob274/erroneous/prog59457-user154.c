#include <stdio.h>
int main(){
    int n,i,j,k;
    int flag=0;
    int me=1;
    int t=0;
    scanf("%d\n",&n);
      int a[100];
      for(i=0;i<n;i++) {
          scanf("%d ",&a[i]); }
      me=a[0];
      t=1;
      for(j=0;j<n;j++) {
          printf("%d\n",j)
      for(k=1;k<n;) {
           if(me==a[k]) {
            t++;
            flag=1;
            break; }
             k=a[k]-1;
             t++;
             printf("%d\n",t);
             if(k<t);
             break; }
        if (flag==1)
        break;
        me=a[j]; }
      printf("%d %d",t,t-1);
    return 0; }
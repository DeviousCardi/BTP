#include <stdio.h>
int main(){
    int k,n,j,c,b,d,i;
    int p=1;
    scanf ("%d", &k);
    scanf ("%d", &n);
    int a[n];
    for (i=0;i<n;i++){
      scanf("%d",&a[i]); }
    c=a[0];
    for(j=0;j<n;j++){
        for(i=p;i<n;i++){
            b=c+a[i];
            if (b==k)
                d=1; }
        c=a[j+1]; }
    if(d==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }
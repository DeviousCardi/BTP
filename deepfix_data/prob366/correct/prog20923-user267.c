#include <stdio.h>
int abs(int a,int b) {
    if(a>b) return a-b;
    else return b-a; }
int main(){
    int n,i,m=0,n1;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    int entry[n],exit[n],diff[n];
     for(n1=1;n1<=n;n1++) {
          for(i=0;i<2*n;i++)
           {if(n1==a[i]) {
                m=m+1;
                if(m==1) entry[n1-1]=i;
                if(m==2) exit[n1-1]=i;
            }}
            m=0; }
        for(i=0;i<n;i++)
         diff[i]=abs(entry[i],exit[i]);
         int minimum,c,location=1;
        minimum = diff[0];
    for ( c = 1 ; c < n ; c++ ) {
        if ( diff[c] < minimum ) {
           minimum = diff[c];
           location = c+1; } }
       if(n>1) printf("%d",minimum);
     if(n=1) printf("1");
    return 0; }
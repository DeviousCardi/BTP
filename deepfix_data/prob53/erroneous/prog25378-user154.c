#include<stdio.h>
long difference(long s[],long start,long n) {
        scanf("%ld",& s[start]);
        if (start==n-1)
        {   printf("%d\n",s[start])
            return s[start]; }
        else {
                if(start!=0) {
                    s[start]= s[start-1]-s[start];
                    s[start-1]=0;
                    printf("%d:%d\n",s[start-1],s[start])
                    difference(s,start+1,n); } } }
int main() {
    long N;
    long ans;
     scanf("%ld\n",&N);
    long a[100000];
      ans=difference(a[100000],0,N);
    printf("%ld",ans);
    return 0; }
#include<stdio.h>
long difference(long s[],long start,long n) {
        scanf("%ld", &s[start]);
        printf("%ld:%ld\n",start,s[start]);
        if (start==n-1)
        {   printf("%ld\n",s[start]);
            return s[start]; }
        else {
                if(start!=0) {
                    s[start]= s[start-1]-s[start];
                    s[start-1]=0;
                    printf("%ld%%%ld\n",s[start-1],s[start]); }
                else {
                  s[start]=s[start]; }
            difference(s,start+1,n); } }
int main() {
    long N;
    long ans;
     scanf("%ld\n",&N);
    long a[100000];
      ans=difference(a[100000],0,N);
    printf("%ld",ans);
    return 0; }
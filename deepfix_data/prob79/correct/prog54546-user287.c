#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,s1=0,s2=0;
	scanf("%d",&n);
    int* t=(int*)(malloc(n*sizeof(int)));
    for(i=0;i<n;i++) {
        scanf("%d",&t[i]); }
    int st=0,end=n-1;
    while(1) {
        if(end-st==0) {
            if(s1==s2||s1<s2)
           st++;
            else
            end--;
            break; }
       if(s1>s2)
          s2=s2+t[end--];
       else if(s2>s1)
        s1=s1+t[st++];
        else {
            s2=s2+t[end--];
            s1=s1+t[st++]; } }
	printf("%d ",st);
	printf("%d",(n-end));
		return 0; }
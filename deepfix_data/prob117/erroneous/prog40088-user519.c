#include <stdio.h>
#include <stdlib.h>
int main() {
	int chk_num(int i,int str[20],int j) {
	    if(j==0)
	    return 0 ;
	    if(i==str[j-1])
	    return 1 ;
	    j=j-1;
	    return chk_num(i,str,j) ; }
	void fibonnacci( int str[20]) {
	    int c,d,j ;
	    str [0]=0;
	    str [1]=1 ;
	    for (j=2 ; j< 20 ;j++) {
	        c=str[j-2];
	        d=str[j-1];
	        str[j]=c+d ; } }
	int main()
	{ int a,i,b, num[1000],str[20];
	fibonnacci (str);
	scanf("%d",&a);
	for(i=0;i<a;i++) {
	    scanf("%d",&num[i]);
	    b=chk_num(num[i],str,20);
	    if(b==1)
	    printf("yes\n")
	    else
	    printf("no\n"); }
	return 0; }
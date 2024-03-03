#include <stdio.h>
#include<math.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if ((a*a+b*b<c*c)||(b*b+c*c<a*a)||(c*c+a*a<b*b)){
  printf("Obtuse Triangle"); }
  else
  if ((a*a+b*b>c*c)||(b*b+c*c>a*a)||(c*c+a*a>b*b)){
  printf("Not Obtuse Triangle"); }
  else
  if((a+b<c)||(b+c<a)||(c+a<b)||(a==0&&b==0&&c==0)){
  printf("Cannot form a Triangle"); }
	return 0; }
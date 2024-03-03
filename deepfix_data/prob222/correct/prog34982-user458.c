#include <stdio.h>
int main() {
    float A,B,C;
    scanf("%f%f%f\n",&A,&B,&C);
     float a=A*40/50;
     float b=B*40/50;
     float c =C*40/50;
     scanf("%f%f%f",&A,&B,&C);
   float e=A*60/100;float f=B*60/100;
   float h=C*60/100;
   float d=a+e; float m=b+f; float n=c+h;
   scanf("%f%f%f",&d,&m,&n);
   if (n<=d&&d<=m){ printf("Median weighted score = %.2f",d);}
     else if(m<=d&&d<=n){ printf("Median weighted score = %.2f",d);}
   else if (n<=m&&m<=d){ printf("Median weighted score = %.2f",m);}
   else if (d<=m&&m<=n){ printf("Median weighted score = %.2f",m);}
   else if (d<=n&&n<=m){ printf("Median weighted score = %.2f",n);}
   else if (m<=n&&n<=d){ printf("Median weighted score = %.2f",n);}
	return 0; }
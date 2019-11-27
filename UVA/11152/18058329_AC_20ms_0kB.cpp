
#include<stdio.h>
#include<math.h>
#define pi 2*acos(0)
int main()
{
double a,b,c,i,j;
double s,r1,r2,triangle,circum,inscribed;
 while(scanf("%lf%lf%lf",&a,&b,&c)==3)
{
s=(a+b+c)/2;
triangle=sqrt(s*(s-a)*(s-b)*(s-c));
r1=((a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
r2=triangle/s;
circum=(pi*pow(r1,2))-triangle;
inscribed=(pi*pow(r2,2));
triangle=triangle-inscribed;
printf("%.4f %.4f %.4f\n",circum,triangle,inscribed);
}
return 0;

}

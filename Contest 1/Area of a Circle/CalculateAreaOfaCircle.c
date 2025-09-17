#include<stdio.h>
int main()
{
double R,Area;
const double pi = 3.141592653;
if (1<=R<=100)
{
scanf("%lf",&R);
Area = pi * R * R;
printf("%lf",Area);
}

}

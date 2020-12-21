#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

float a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3, e1, e2, e3, e4, delta;

delta = (b*b)-4*a*c;
e1 = (a*(c+d))/(b*(e+f));
e2 =a+((c+d)*(c+d))/(b*b)*d*(1/c);
e3 = (a*a*a*a*a*a)/(e+f)+d;
e4 = (-b + sqrt(delta))/2;

printf("As respostas para as expressoes sao respectivamente:");
printf("\n\n%f %f %f %f\n\n", e1, e2, e3, e4);








system("PAUSE");
return 0;
}



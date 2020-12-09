#include <stdio.h>
#include <math.h>

int main()
{
    double a, s, precision;

    for( a=0.50, s=0.10, precision = s/2 ; fabs(a - 1.0) > precision ; a+=s, s+=0.001 ) 
    {
        printf("a = %.2f (vai ar peldošo punktu %e; solis - %.3f)\n",a,a,s);
        
    }
    printf("Pēc cikla:\n");
    printf("a = %.2f (vai ar peldošo punktu %e)\n",a,a);

    return 0;
}

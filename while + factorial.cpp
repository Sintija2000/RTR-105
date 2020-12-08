#include <stdio.h>

int main()
{
    while(0)
    {
        printf("Šis teksts netiks attēlots\n");
    }

    while(1) 
    {
        printf("Šis teksts tiks attēlots visu laiku - novērosim bezgalīgu ciklu\n");
        break;
    }
    
    double a = 3.5e-1;
    double s = 0.5e-1;

    printf("Pirms cikla:\n");
    printf("a = %.20f (vai ar peldošo punktu %e)\n",a,a);
    
    double precision = s/2; 
    
    while(a!=1.0)
    {
        printf("a = %.20f (vai ar peldošo punktu %e)\n",a,a);
        printf("a-1.0 = %.20f (vai ar peldošo punktu %e)\n",a-1.0,a-1.0);
        
    }
    
     printf("Pēc cikla:\n");
    printf("a-1.0 = %.20f (vai ar peldošo punktu %e)\n",a-1.0,a-1.0);
    printf("a = %.20f (vai ar peldošo punktu %e)\n",a,a);
    
    return 0;
}


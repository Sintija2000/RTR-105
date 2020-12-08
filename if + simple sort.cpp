#include <stdio.h>

int main()
{
   
    if(2)
     {
         printf("teksts būs redzams, jo 2!=0\n");
     }

    if(9)
     {
         printf("teksts būs redzams, jo 9!=0\n");
     }
     
    if(0)
     {
         printf("teksts nebūs redzams, jo 0==0\n");
     }

    char a = 10;
    if(a==10)
     {
        printf("jā, a mainīgā vērtība ir 10\n");
        printf("a ir %d\n",a);
     }

    if(a==9)
     {
        printf("jā, a mainīgā vērtība ir 9\n");
        printf("a ir %d\n",a);
     }
    else
     {
        printf("nē, a mainīgā vērtība nav 9\n");
        printf("a ir %d\n",a);
     }
    
    char b = 9;
    if(a!=b)
        printf("mainīgā a vērtība (%d) nav vienāda ar b mainīgā vērtību (%d)\n",a,b);

    if(2)
      ;

    if(a==9)
     {
        printf("jā, a mainīgā vērtība ir 9\n");
        a = 11;
        if(a==11)
         {
            printf("a tagad ir %d\n",a);    
         }
     }

    return 0;
}
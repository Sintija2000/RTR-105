#include <stdio.h>
#include <time.h>

int main()
{
    char a = 5; 
    char b = 5;
    char c;

    a = 100; 
    b = 4;
    c = a >> b;
    printf("%d >> %d = %d\n",a,b,c);

    return 0;
    
}


#include<stdio.h>

int main()
{
char *p, fst[100];
p = fst;
printf("Enter Anythings: ");
scanf("%s",fst);

    while (*p != '\0')
    {
        if(*p >= 'a' && *p <= 'z')
        {
          printf("%c", *p - 32 );
        
        }
        else if(*p >= 'A' && *p <= 'Z')
        {
          printf("%c",*p + 32 );
         
        } 
        p++;
    }
    return 0;
}
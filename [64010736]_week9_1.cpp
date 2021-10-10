#include<stdio.h>
 
int main()
{
    int square, r, c;
      
    printf("  Enter square size  : ");
    scanf("%d", &square);
     
    for(r=0; r<square; r++)
    {
        if(r==0 || r==square-1)
        {
            printf("\t*");
            for(c=0; c<square-1; c++)
            {
                printf(" *");
            }
            printf("\n");
             
            continue;
        }
         
        printf("\t* ");
         
        for(c=0; c<square-2; c++)
        {
            printf("  ");
        }
         
        printf("*\n");
    }
     
    return 0;
}

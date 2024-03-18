#include<stdio.h>

int main(void)
{
    int i, j, N;

  
    printf("ENTER NUMBER OF ROW: ");
    scanf("%d", &N);

   
    for(i=1; i<=N; i++)
    {
        
        for(j=1; j<=N; j++)
        {
          
            printf("*");
        }
        
      
        printf("\n");
    }

    return 0;

}	

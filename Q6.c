#include<stdio.h>



int main(){
    
    int row, col;
    
    printf("Enter the array's row size:");
    scanf("%d",&row);
    
    printf("Enter the array's col size:");
    scanf("%d",&col);
    
    int number1[row][col];
    
    for(int i = 0; i < row; i++)
    {
        
        for(int j = 0; j < col; j++)
        {
            
            printf("Enter array element[%d][%d]",i,j);
            scanf("%d",&number1[i][j]);
        }
    }
    
    
    for(int i = 0; i < row; i++){
        
        for(int j = 0; j < col; j++){
            
            printf("%d ",number1[i][j]);
        }
        
        printf("\n");
    }
    
    int number2[row][col];
    
    
        for(int i = 0; i < row; i++)
    {
        
        for(int j = 0; j < col; j++)
        {
            
            printf("Enter array element[%d][%d]",i,j);
            scanf("%d",&number2[i][j]);
        }
    }
    
     for(int i = 0; i < row; i++){
        
        for(int j = 0; j < col; j++){
            
            printf("%d ",number2[i][j]);
        }
        
        printf("\n");
    }
    
    
    int number3[row][col];

   for (int  i = 0; i < row; i++)
   {
      for(int j = 0; j < col; j++){


         number3[i][j] = number1[i][j] + number2[i][j];
      }

      printf("\n");
   }
   

   for(int i = 0; i < row; i++){

      for (int j = 0; j < col ; j++)
      {
         printf("%d ",number3[i][j]);
      }
       printf("\n");
   }

    
    
    
    return 0;
    
}
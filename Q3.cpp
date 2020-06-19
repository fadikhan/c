  #include <stdio.h>
    int main ()
    {
 
        static int array[5][5];
        int i, j;
        int row , col;
  int choice ;
 
 printf("1: You want to enter in row \n");
 printf("2 You want to enter in col \n");
 scanf("%d",&choice);
 if(choice==1)
 {
 
         printf("Select row no u want to enter value \n ");
         scanf("%d",&row);
         printf("Enter values to row %d \n" , row);
        for (i = 0; i < 5; ++i)
        {
            
                scanf("%d", &array[row-1][i]);
            
        }
        	
 }
 else if(choice==2)
 {
 	  printf("Select col no u want to enter value \n ");
         scanf("%d",&col);
            printf("Enter values to col %d \n" , col);
        for (i = 0; i < 5; ++i)
        {
            
                scanf("%d", &array[i][col-1]);
            
        }
        	
 }

 
        
       
 
        
        for (i = 0; i < 5; ++i) 
        {
            for (j = 0; j < 5; ++j) 
            {
            	printf("%d",array[i][j]);
            }
            
            printf("\n");
        }
 
    }

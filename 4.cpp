#include <stdio.h>
int main()
 {
	int a[5];
	int i,j,t;
         printf("请输入5个数空格隔开 :\n");

          for (i=0;i<5;i++)
		  {
			  scanf("%d",&a[i]);
		  }
                    
         printf("\n");
         for(j=0;j<4;j++)
		 {
			  for(i=0;i<4-j;i++)
			 {
				 if (a[i]>a[i+1])
				 {
					 t=a[i];
					 a[i]=a[i+1];
					 a[i+1]=t;
				 } 
			 } 
	  
		 }
	
         printf("从小到大排列 :\n");
                  for(i=0;i<5;i++)
				  {
	 
					  printf("%d ",a[i]);
				  }
 
               printf("\n");

		return 0;
	
	
	
 }

//1 对10个数组元素依次赋值为1,2,3,4,5,6,7,8,9,10，要求按逆序输出
#include <stdio.h>
int main()
{ 
     int a[10],i;
	 for(i=0;i<=9;i++)
	 {
		 a[i]=i;
	 }
	 
	 for(i=9;i>0;i--)
	 {
		
		 printf("%d ",a[i]);
	 }
	printf("\n");
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
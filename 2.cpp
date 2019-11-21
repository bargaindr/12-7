//2 输出Fibonacci数列
/*
Fibonacci数列：
数列前两个数均为1，第三个数为前两个数之和，第4个数为第2，第3两个数之和，依次类推，后一个数为前两个数之和。
Fibonacci数列如下：
1，1，2，3，5，8，13，21，34，55，89，144，233……
要求输出Fibonacci数列的前30个数
*/
#include <stdio.h>
#include <windows.h>
int main()
{
	 int i;
	 int a[30]={1,1};                                
     for(i=2;i<30;i++)
	 {
		 a[i]=a[i-2]+a[i-1]; 
	 }
         
     for(i=0;i<30;i++)
	 {
		 printf("\n");
         printf("%d",a[i]);
		 Sleep(1000);
	 }
	  printf("\n");
                                   


	

   return 0;
}
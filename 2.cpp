//2 ���Fibonacci����
/*
Fibonacci���У�
����ǰ��������Ϊ1����������Ϊǰ������֮�ͣ���4����Ϊ��2����3������֮�ͣ��������ƣ���һ����Ϊǰ������֮�͡�
Fibonacci�������£�
1��1��2��3��5��8��13��21��34��55��89��144��233����
Ҫ�����Fibonacci���е�ǰ30����
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
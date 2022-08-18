#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<conio.h>
#define isleap(y) ((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)
 
 
#include <stdio.h>
int max(int a,int b, int c)
{
	int max = a;
	if(max < b)
			max = b;
	if(max < c)
			max = c;
			
		return max;
}

int min(int a,int b,int c)
{ 
	int min = a;
	if(b < min)
			min = b;
	if(c < min )
			min = c;
			
		return min;
}
int median(int a,int b,int c)
{
	if((a <= b && b <= c) || (c <= b && b <= a))	
	{
			return b;	
	}
	else if((a <= c && c <= b) || (b <= c && c <= a))
	{
			return c;
	}
		
		return a;
}
int main()
{
	int x, y, z;

	printf("uc tamsayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);
	printf("\n");
	printf("%d %c %d %c %d",min(x,y,z),min(x,y,z) == median(x,y,z) ? '=' : '<',median(x,y,z),max(x,y,z) == median(x,y,z) ? '=' : '<',max(x,y,z));
		

}




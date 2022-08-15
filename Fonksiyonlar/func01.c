#include<stdio.h>

int max3(int x, int y, int z) 
{
int max = x;
			
if(y > max)
	max = y;
				
if(z > max)					
	max = z;
					
	return max;
}
int main()
{
	int x, y, z;
	printf("uc tam sayi girin:\n");
	scanf("%d%d%d",&x,&y,&z);

	printf("%d, %d ve %d sayilarinin en buyugu %d\n ",x,y,z,max3(x,y,z));
}

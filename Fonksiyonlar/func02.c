#include<stdio.h>

int max2(int x, int y)
{
	return x > y ? x : y;
}

int max4(int a, int b, int c, int d) 
{
	return max2(max2(a, b), max2(c, d));
}
int main()
{
	int a, b, c, d;

	printf("dort tamsayi girin:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d, %d, %d ve %d sayilarinin en buyugu %d\n", a, b, c, d, max4(a, b, c, d));
}

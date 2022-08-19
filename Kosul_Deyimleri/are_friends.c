#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<conio.h>
#define isleap(y) ((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)
 
 
#include <stdio.h>
int are_friends(int number1 ,int number2)
{
	int i;

	int sum1=0,sum2=0;
	for(i = 1; i < number1 ; i++)
	{
		if(number1 % i == 0)
		{
		sum1 += i;
		}
				
	}
	for(i = 1; i < number2 ; i++)
	{
		if(number2 % i == 0)
		{
		sum2 += i;
		}
	}
	return sum1==number2 && sum2 == number1;
}
int main()
{
	int i;
	int num1,num2;
	int return_value;
	scanf("%d%d",&num1,&num2);
	return_value = are_friends(num1,num2);
	if (return_value == 1)
		printf("%d ve %d sayısı arkadas sayilardir",num1,num2);
	else 
		printf("%d ve %d sayısı arkadas sayilar değildir",num1,num2);
}

//220 => 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284  ==> 284 => 1 + 2 + 4 + 71 + 142 = 220 arkdas sayilar ((1184 ,1210),(2620,2924)) ==> deneme sayilari

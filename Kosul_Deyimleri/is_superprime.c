#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<conio.h>
#include <stdio.h>

int isprime(int x)
{
	int flag = 0, i ;
	for( i = 2; i <= x/2; i++) 
	{
	if(x % i == 0) 
	{
	flag = 1;
	break;
	}
	} 
if(flag == 0)
	return 1;
else
	return 0;
}
int is_superprime(int y)
{
	if(!isprime(y))
		    return 0;

	int counter = 0,i;
	for(i = 2; i <= y; i++)
		if(isprime(i))
		    counter++;
		
	   return isprime(counter);
}
int main(void) 
{
 int number;
printf("sayi girin : ");
scanf("%d",&number);
if(is_superprime(number) == 1)
      	printf("%d sayisi super asaldir ",number);
else
	printf("%d sayisi super asal degildir ",number);

}

/*
 * 1. asal sayı 2 ==> uper asal değil
 * 2. asal sayı 3 ==> super asaal
 * 3. asal sayı 5 ==> super asaal
 * 4. asal sayı 7 ==> uper asal değil
 * 5. asal sayı 11==> super asaal
 * 6. asal sayı 13 ==> uper asal değil
 * 7. asal sayı 17==> super asaal
 * */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<conio.h>

 
 
#include <stdio.h>
unsigned int display_collatz(unsigned long long val)
{
		int i=1,counter = 0;
	for(;i < val;)
	{
	if(val % 2 == 0)
	{
	printf("%d ",val);
	val = val/2;	
	}	
	else
	{
	printf("%d ",val);
	val = (3 * val) + 1;
	}
	counter += 1;
	if(val == 1)
	{
	printf("%d\n",val);
	counter += 1;
	break;
	}

	}
	return counter;
}
int main()
{
	int number,value;
	printf("sayi girin :");
	scanf("%d",&number);
	value = display_collatz(number);	
	printf("%d tane sayi yazildi",value);
}

 // Collatz sanısı (Collatz conjecture) ==> 72543 deneme sayisi return değeri 188 olmalı


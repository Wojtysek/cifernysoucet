#include <stdio.h>

int main()
{
	int cifra;
	int soucet = 0;
	int i;
	printf("Zadejte cislo pro ciferny soucet: ");
	scanf_s("%d", &cifra);
	while (cifra > 0)
	{
		i = cifra % 10;
		soucet = soucet + i;
		cifra = cifra / 10;
	}
	printf("%d", soucet);
	return 0;

}
/*
Odev No : 2
Hüseyin ANLAMAZ
*/

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

void histogram(int jeton1[], int boyut);
void rakamsal(int jeton1[], int boyut1);
void main()
{
	int jeton[50], jeton1[10] = { 0 }, boyut = 10;
	srand(time(NULL));
	for (int i = 0; i < 50; i++)
	{
		jeton[i] = 1 + rand() % 10;
		jeton1[jeton[i] - 1]++;
	}
	rakamsal(jeton1, boyut);
	histogram(jeton1,boyut);
}
	
void rakamsal(int jeton1[], int boyut)
{
	for (int p = 0; p < boyut; p++)
	{
		printf("%d haznedeki jeton sayisi : %d \n", p+1, jeton1[p]);
	}
}
void histogram(int jeton1[],int boyut)
	{
	printf("\nJetonlarin histogram seklindeki dagilimlari :\n");
	int max = 0;
		for (int i = 0; i < 10; i++) // MAKSIMUM DEGERÝ BULMA
		{

			if (max<jeton1[i])
				max = jeton1[i];

		}
	
		for (int i = max; i>0; i--) // HISTOGRAM SEKLINDE ALMA
		{
			printf("\n%d", i);
			for (int a = 0; a < 10; a++) // 10 TANE SUTUN ILERLER 
			{
				if (jeton1[a] >= i) // MAKSIMUM DEGERE EÞÝTSE VEYA BUYUKSE YAZDIRIR
					printf(" | o |");
				else
					printf(" |   |"); // DEGÝLSE BOÞLUK BIRAKIR

			}

		}
		printf("\n--------------------------------------------------------------\n    1     2     3     4     5     6     7     8     9    10\n\n");
	}


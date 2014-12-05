/*
Odev No:1
Huseyin ANLAMAZ
*/

#include <stdio.h>
#include <conio.h> // KUTUPHANELER
#include <stdlib.h>

void ucgen(); //
void kare(); //
void dikdort(); //  SEKILLERIN FONKSIYONLARI
void eskenar(); //
void paralel(); //

void main()
{
	int menu;
	geridonus:printf("---Menu---\n");
	printf("1. Ucgen\n");
	printf("2. Kare\n");
	printf("3. Dikdortgen\n");
	printf("4. Eskenar dortgen\n");
	printf("5. Paralel kenar\n");
	printf("0. Cikis\n");
	printf("Seciminiz :");
    hata:scanf_s("%d", &menu);
	printf("\n");

	switch (menu)
	{
	case 1:
		printf("Ucgen cizilcek");
		system("cls");// EKRANI TEMIZLER
		ucgen(); // FONKSIYONA GÝDER
		printf("\n\nMenuye donmek icin bir tusa basiniz\n"); // FONKSIYON BITINCE MENUYE DONME YAZISI
		_getch(); // MENUYE DONMEK ICIN BIR TUSA BASMA 
		system("cls"); // MENUYE GERI GELMEDEN ONCE EKRANI TEMIZLEME
		goto geridonus;
		break;
	case 2:
		printf("Kare cizilcek");
		system("cls");
		kare();
		printf("\n\nMenuye donmek icin bir tusa basiniz\n");
		_getch();
		system("cls");
		goto geridonus;
		break;
	case 3:
		printf("Dikdortgen cizilcek");
		system("cls");
		dikdort();
		printf("\n\nMenuye donmek icin bir tusa basiniz\n");
		_getch();
		system("cls");
		goto geridonus;
		break;
	case 4:
		printf("Eskenar dortgen cizilcek");
		system("cls");
		eskenar();
		printf("\n\nMenuye donmek icin bir tusa basiniz\n");
		_getch();
		system("cls");
		goto geridonus;
		break;
	case 5:
		printf("Paralel kenar cizilcek");
		system("cls");
		paralel();
		printf("\n\nMenuye donmek icin bir tusa basiniz\n");
		_getch();
		system("cls");
		goto geridonus;
		break;
	case 0:
		printf("Gule gule");
		break;
	default:
		printf("Hatali bir secim yaptiniz ! Seciminiz : ");
		goto hata;
		break;
	}


	printf("\n\n");
}

void ucgen()
{
	int x;
	printf("Ucgenin boyutu :");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void kare()
{
	int kenar;
	printf("Bir kenar uzunlugu girin :");
	scanf_s("%d", &kenar);
	for (int a = 0; a < kenar; a++) // 
	{
		for (int b = 0; b < kenar; b++)
			printf("*");
		printf("\n");
	}
}

void dikdort()
{
	int k, p, uzunkenar, kisakenar;
	printf("Uzun kenari girin :");
	scanf_s("%d", &uzunkenar);
	printf("Kisa kenari girin :");
	scanf_s("%d", &kisakenar);
	for (k = 0; k < kisakenar; k++)
	{
		printf("\n");
		for (p = 0; p < uzunkenar; p++)
			printf("*");
	}
}
		void eskenar()
		{
			int x, y, z, sayi;
			printf("Lutfen tek sayi giriniz:");
		    hataeskenar: scanf_s("%d", &sayi);
			if (sayi % 2 != 0) // SAYININ MOD 2 SI 0 DAN FARKLI ISE
			{

				for (x = 1; x <= (sayi + 1) / 2; x++)
				{
					for (y = 1; y <= (sayi + 1) / 2 - x; y++)
					{
						printf(" ");
					}
					for (z = 1; z <= (x * 2) - 1; z++)
					{
						printf("*");
					}
					printf("\n");
				}
				for (x = 1; x <= sayi / 2; x++)
				{
					for (y = 1; y <= x; y++)
					{
						printf(" ");
					}
					for (z = 1; z <= sayi - (2 * x); z++)
					{
						printf("*");
					}
					printf("\n");
				}

			}
			else{
				printf("Hatali veya cift sayi girdiniz . Lutfen tek sayi giriniz: ");
				goto hataeskenar;
			}

		}

		void paralel()
		{

			int x;
			printf("Uzunluk giriniz :");
			scanf_s("%d", &x);
			for (int i = 1; i <= x; i++)
			{
				for (int j = 1; j < i; j++)
				{
					printf(" ");
				}
				for (int a = 1; a <= x; a++)
				{
					printf("*");
				}
				printf("\n");

			}
		}


#include <stdio.h>
#include <conio.h>

// H�SEY�N ANLAMAZ
// 24.10.2014

// BU PROGRAM 1 DEN 5 E KADAR OLAN SAYILARI CIKARIR H�SEY�N
/*int main ()*/
/*{
	
	int x=5,;
		while (x>0&&x<=5)
		{
	        printf("%d\n",x);
			x=x-1;
		
		}
		getch ();
}*/

// BU PROGRAM 1 DEN 25 E KADAR T�M SAYILARI TOPLAR H�SEY�N
/*{
	
	    int x=1,toplam=0;
		while (x>0&&x<=25)
		
		{
	    x++;
		toplam=x+toplam;
		
        
		}
		printf("%d\n",toplam);
		getch ();
}*/
// G�R�LEN NOT KADAR ORTALAMA BULUR - WHILE DONGUSU H�SEY�N
/*{
	long toplam = 0;
	int ogrenciSayisi=0, notu;
	float ortalama;

	printf("Notlari girin (-1 durdurur).");
	scanf("%d",&notu);

	while (notu !=-1)
	{
		toplam = toplam + notu;
		ogrenciSayisi=ogrenciSayisi+1;
		printf("Notu girin ( -1 durdurur.");
		scanf("%d",&notu);
	}
	if (ogrenciSayisi !=0)
	{
		ortalama = toplam / ogrenciSayisi;
		printf("\n\nOrtalama : %f \n",ortalama);
	}
	getch ();
	return 0;
}*/

// G�R�LEN NOT KADAR ORTALAMA BULUR - DO WHILE DONGUSU H�SEY�N
/*{
    long toplam = 0;
	int ogrenciSayisi=0, notu;
	float ortalama;
	do
	{
		printf("Notlari girin (-1 durdurur).");
		scanf("%d",&notu);
		if(notu !=-1)
		{
			toplam = toplam + notu;
			ogrenciSayisi=ogrenciSayisi+1;
		}
	}
	while (notu!=-1);
	if (ogrenciSayisi !=0)
	{
		ortalama = toplam / ogrenciSayisi;
		printf("\n\nOrtalama : %f \n",ortalama);
	}
	getch ();
	return 0;
	}*/
    
	// BU PROGRAM BIR YAZIYI 10 KERE YAZDIRIR H�SEY�N
/*{
	int i;
	for(i=1;i<=10;i++)
		printf("VISUAL BASIC HAS BEEN CRASHED . PLEASE READ LOGS FOR FUTHER ANALYSIS\n");
	getch ();
	return 0;
}*/

// BU PROGRAM BIR YAZIYI 10 KERE YAZDIRIR - WHILE DONGUSU H�SEY�N

/*{
	int i;
	i=1;
	while (i<=10)
	{
		printf("VISUAL BASIC HAS BEEN CRASHED . PLEASE READ LOGS FOR FUTHER ANALYSIS\n");
		i=i+1;
	}
	getch ();
	return 0;
}*/
 // GIRILEN SAYILARDAN EN BUYUGUNU VE EN KUCUGUNU GOSTERIR H�SEY�N
/*{
	int sayi,max,min;
	printf("Sayi gir (-1 durdurur).");
	scanf("%d",&sayi);
	max=sayi;
	min=sayi;
	while(sayi>0)
	{
		if(sayi>max)
			max=sayi;
		if (sayi<min)
			min=sayi;
		printf("Sayi gir (-1 durdurur).");
		scanf("%d",sayi);
	}
	printf("\n\n");
	printf("En buyuk sayi : %d\n",max);
	printf("En kucuk sayi : %d\n",min);
	return 0;
}*/

//SAYININ TEK CIFT OLDUGUNU SOYLER H�SEY�N

/*void tek_cift(int sayi)
{
	if (sayi%2==0)
		printf("%d sayisi cift\n",sayi);
	else
		printf("%d sayisi tek\n",sayi);
}
int main ()
{
	int i;
	printf("Bir sayi gir = ");
	scanf("%d",&i);
	tek_cift(i);
	printf("---------------------\n");
	tek_cift(5);
	getch ();
	return 0;
	
}*/

// NOTA GORE HARFLE NOTU S�YLER H�SEY�N
/*char harfecevir(int vz, int fn)
{
	float ortalama;
	char harf;
	ortalama  = vz*0.4+fn*0.6;
	if (ortalama<50)
		harf='F';
	else if (ortalama<60)
		harf='D';
	else if (ortalama<70)
		harf='C';
	else if (ortalama<80)
		harf='B';
	else
		harf='A';
	return harf;
}
int main ()
{
	int vize,final;
	printf("Vize notu ="); scanf("%d",&vize);
	printf("Final notu ="); scanf("%d",&final);
	printf("Harf olarak not = %c\n",harfecevir(vize,final));
	getch ();
	return 0;
}*/






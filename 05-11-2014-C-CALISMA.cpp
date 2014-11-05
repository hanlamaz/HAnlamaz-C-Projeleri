// HÜSEYÝN ANLAMAZ
// 5.11.2014

#include <stdio.h>
#include <conio.h>

void main ()
/*{
	int sayi[5];
	for(int i=0;i<=5;i++)
	{
		printf("%d. sayiyi girin\n",i+1);
		scanf("%d",&sayi[i]);
	}
	printf("---------------------\n");
	printf("ilk sayi : %d\n",sayi[0]);
	printf("ucuncu sayi : %d\n",sayi[2]);
	printf("son sayi : %d\n",sayi[4]);
	getch ();
	return 0;
}*/

/*{
	int i;
	int kare[5][2]={1,1,
                    2,4, 
					3,9,
					4,16,
					5,25};
	printf("1 ile 10 arasinda bir sayi giriniz:");
	scanf("%d",&i);
	if(i<0 || i>10)
		printf("MALA BAK MALA");
	else {

	for(int j=0;j<5;j++) // ILK SUTUNU SIRALAR
		if(kare[j][0]==i) // SOL SUTUNDA GIRDIGIMIZ SAYIYI ARAR
			printf("%d sayisinin karesi %d",i,kare[j][1]);
	}
	getch ();
}*/
{
char adlar[7][20];
for(int i=0;i<6;i++)
{
	printf("%d ismini girin",i);
    scanf_s("%s",adlar[i]);
}
printf("ilk isim %s :",adlar[0]);
printf("ucuncu isim %s :",adlar[3]);
printf("son isim %s :",adlar[4]);


_getch ();


}




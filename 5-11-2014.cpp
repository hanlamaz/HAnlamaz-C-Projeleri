// HÜSEYÝN ANLAMAZ
// 5.11.2014

#include <stdio.h>
#include <conio.h>
#include <cstringt.h>
int main()
/*{
	for( int i=1;i<15;i++)
	{
		printf("%d\n",i);
	}
	getch ();
	return 0;
}*/

/*{
	int i=1;
	for(;;i++)
	{
		if(i==15)
			break;
		printf("%d\n",i);
		i++;
	}
	getch ();
		return 0;
}*/

/*{
	int i=1;
	while(i<15)
	{
		printf("%d\n",i);
		i++;
	}

	getch ();
    return 0;


}*/

/*{
	char isim[6];
	scanf("%s",isim);
	printf("%s\n",isim);
	isim[4]='\0';
	printf("%s\n",isim);
	printf("%c\n",isim[1]);
	for(int i=0;i<=6;i++)
		printf("%c",isim[i]);

	getch ();
	
}*/

/*{
float tavsan=845,kus=1655;
int yil=2008;

while(true) // while(tavsan<kus) da olur . önemli olan sonsuz döngü saðlamak
{

	if(tavsan>kus){ // tavsan kustan buyuk 
	break; // olursa donguden cýkar
	}
	tavsan = tavsan + ((tavsan * 4.3) / 100);
	kus = kus + ((kus * 1.4) /100) ;
    yil++;
}
printf("YIL %d OLDUGUNDA TAVSANLAR :%f KUSLARI :%f GECER",yil,tavsan,kus);
getch ();
return 0;
}*/

/*{
	
	for (int sayi=100;sayi<=999;sayi++)
	{
		if(sayi%3==1 && sayi%4==1 && sayi%5==1 && sayi%7==0) // ISLEMI SAGLAYAN BIRIMLER
		{
			printf("%d\n",sayi);
		}
	}
	getch ();
}*/

/*{
	char isim[100];
	printf("Cumle girin :");
	gets(isim); // Boþluk girilceðinden scanf deðilde gets
	char a=toupper(isim[0]); //girilen harfi büyütür
	printf("%c",a);
	for(int i=0;i<=100;i++)
	{
		if(isim[i]==' ')
	{
		char a=toupper(isim[i+1]); //boþluktan sonraki harfi buyut
		printf("%c",a);
	}

	}
	getch();

}*/










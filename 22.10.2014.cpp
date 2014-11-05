// HÜSEYÝN ANLAMAZ
//22.10.2014



/*#include<stdio.h>
#include<conio.h>
int main( void )
{
	int not;
	printf("Lutfen notu giriniz = ");
	scanf("%d",&not);
	if ( not>100 || not<0 ){printf("Yanlis deger");}
	else {
	switch( not / 10 ) {
		case 10: printf("NOT: A\n"); break; 
		case 9: printf("NOT: A\n"); break;
		case 8: printf("NOT: B\n"); break;
		case 7: printf("NOT: C\n"); break;
		case 6: printf("NOT: D\n"); break;
		case 5: printf("NOT: F\n"); break;
		case 4:
		case 3:
		case 2: 
		case 1:
		case 0:
		default:
			printf("HATA: Bilinmeyen bir deðer girdin yuh\n");
	}
	}
	getch ();
	return 0;
}*/


// BASÝT BÝR HESAP MAKÝNESÝ HÜSEYÝN

/*#include<stdio.h>
#include<math.h> // Toplama çýkarma çarpma bölme için gerekli
#include<conio.h>
int a,b;
float sonuc;
char islem; // Ýþlemin iþaretleri için gerekli
int main()
{
    printf("1.Sayiyi Giriniz\n");
    scanf("%d",&a);
    printf("2.Sayiyi Giriniz\n");
    scanf("%d",&b);
    printf("Islem Giriniz(*,/,+,-)");
    scanf("%s",&islem);
    switch(islem)
    {
                 case '-': sonuc=a-b;printf("Sonuc=%.2f",sonuc);break;
                 case '+': sonuc=a+b;printf("Sonuc=%.2f",sonuc);break;
                 case '*': sonuc=a*b;printf("Sonuc=%.2f",sonuc);break;
                 case '/': sonuc=a/b;printf("Sonuc=%.2f",sonuc);break;
                 default : printf("Girdiginiz Islem Yanlis");break;                                
                 }
                 getch();
                 return 0;
    }*/
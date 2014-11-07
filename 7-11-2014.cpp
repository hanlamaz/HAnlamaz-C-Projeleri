/* FADÝME ÖZHAN */


#include<stdio.h>
#include<conio.h>
#include<math.h>

void mesafe()
{
	int x1,x2,x3,y1,y2,y3;
	float uzaklik1,uzaklik2,uzaklik3;
	float a,b,c;
	printf("A noktasini girin:");
	scanf("%d %d",&x1,&y1);
	printf("B noktasini girin:");
	scanf("%d %d",&x2,&y2);
	printf("C noktasini girin:");
	scanf("%d %d",&x3,&y3);
	a=((x1-0)*(x1-0))+((y1-0)*(y1-0));
	b=((x2-0)*(x2-0))+((y2-0)*(y2-0));
	c=((x3-0)*(x3-0))+((y3-0)*(y3-0));
	uzaklik1=sqrt(a);
	uzaklik2=sqrt(b);
	uzaklik3=sqrt(c);
	if(uzaklik1<uzaklik2 && uzaklik1<uzaklik3)
		printf("(%d,%d) origine en yakin noktadir.",x1,y1);
	else if(uzaklik2<uzaklik3 && uzaklik2<uzaklik1)
		printf("(%d,%d) origine en yakin noktadir.",x2,y2);
	else if(uzaklik3<uzaklik2 && uzaklik3<uzaklik1)
		printf("(%d,%d) origine en yakin noktadir.",x3,y3);
	getch();
}




int main()
{
	mesafe();
    getch();
	return 0;
}




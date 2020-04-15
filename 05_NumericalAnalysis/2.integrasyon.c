#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x) {
	return  1/(2+x*x*x); //7*x*x/ pow((x*x+2),5); //Ýntegrali alýnmak istenilen fonksiyon bu kod satýrýna yazýlýr. Fonksiyonda sin,cos,ln,e tarzý ifadeler de bulunabileceði için fonksiyonu bu þekilde almayý tercih ettim ki programýmýz karmaþýk fonksiyonlarda da çalýþabilsin.
}
float simpson(float a,float b,float n);
float trapez(float a,float b,float n);

int main() {
	int p;
	float a,b,n;
	printf("alt sinir degerini giriniz: ");
	scanf("%f",&a);
	printf("ust sinir degerini giriniz: ");
	scanf("%f",&b);
	printf("aralik sayisini giriniz: ");
	scanf("%f",&n);
	printf("Bir integrasyon yontemi seciniz..\n1_Simpson Yontemi\n2_Trapez Yontemi\n");
	scanf("\n%d",&p);
	if (p==1)
	printf("Girilen fonksiyonun verilen deger araliklarindaki integral degeri Simpson yontemine gore %f tir. ",simpson(a,b,n));
	else printf("Girilen fonksiyonun verilen deger araliklarindaki integral degeri Trapez  yontemine gore %f tir. ",trapez(a,b,n));
	system("pause");
	return 0;	
}


float simpson(float a,float b,float n) {
	float h,toplam;
	int i;
	h= (b-a)/n;
	toplam= f(a)+f(b);
	for (i=1;i<n;i++)
	{
	   if (i%2==0)
	   toplam+=2*f(a+i*h);
	   else 
	   toplam+=4*f(a+i*h);
    }
    toplam*=(h/3);
	return toplam;	  
}
	
	
	float trapez(float a,float b,float n) {
	float h,toplam;
	int i;
	h= (b-a)/n;
	toplam= f(a)+f(b);
	for (i=1;i<n;i++)
	{
	   toplam+=2*f(a+i*h);
    }
    toplam*=(h/2);
	return toplam;	  
}
	



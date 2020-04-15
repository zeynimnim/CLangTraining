#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float grafikyont(float a,float k,float E);
float yariyabolme(float a,float b,float E);
float regulafals(float a,float b,float E);
float newtonraphson(float a,float E);
float f(float x) {
	return  x*x*x-6.5*x*x+13.5*x-9; //7*x*x/ pow((x*x+2),5); //Koku bulunmak istenilen fonksiyon bu kod satýrýna yazýlýr. Fonksiyonda sin,cos,ln,e tarzý ifadeler de bulunabileceði için fonksiyonu bu þekilde almayý tercih ettim ki programýmýz karmaþýk fonksiyonlarda da çalýþabilsin.
}
float turev(float x) {
	float trv,k=0.01;
	trv= (f(x+k)-f(x-k))/(2*k);
return trv;          }

int main() {
	int p;
	float a,b,k,E,kok;
	printf("Fonksiyonun kokunu bulmak icin bir yontem seciniz..\n1.Grafik Yontemi\n2.Yariya Bolme Yontemi\n3.Regula False Yontemi\n4.Newton Raphson Yontemi\n ");
	scanf("\n%d",&p);
	printf("Epsilon sayisini giriniz: ");  
	scanf("%f",&E);	
	if (p==1 || p==4){             /*bu kýsýmda hangi yontemin secildigine baglý olarak verileri almamýz gerekiyor*/
	printf("x baslangic sayisini giriniz: ");
	scanf("%f",&a);
	                 }
		if (p==1) {
	    printf("Artis miktarini giriniz: ");
	    scanf("%f",&k);
	              }
	       if (p==2 || p==3){	   
	        printf("alt sinir degerini giriniz: ");
        	scanf("%f",&a);
        	printf("ust sinir degerini giriniz: ");
        	scanf("%f",&b);
                         	}
               if (p==1)  	
               kok= grafikyont(a,k,E);
				   else {
				     if (p==2) 		  
				     kok= yariyabolme(a,b,E);
						else {
						if (p==3) 
					    kok= regulafals(a,b,E);
							 else kok= newtonraphson(a,E);  
							 }
					    }	
                           
						 	
	printf("Girilen fonksiyona gore aranilan kok %f tir. ",kok);
	system("pause");
	return 0;	
}

float grafikyont(float a,float k,float E) {
	while (f(a+k)-f(a)>E)
	{
	  a=a+k;
	  k=k/2;
    }
	return a;	  
}


float yariyabolme(float a,float b,float E) {
	float c;
	c=(a+b)/2;
	while (fabs(f(c))>E) {
	if (f(a)*f(c)<0)
	b=c;
    else a=c;
    c=(a+b)/2;
                   }
	return c;	  
}


float regulafals(float a,float b,float E) {
	float c;
	c=(b*f(a)-a*f(b))/(f(a)-f(b)) ;
	while (fabs(f(c))>E) {
	if (f(a)*f(c)<0)
	b=c;
    else a=c;
    c=(b*f(a)-a*f(b))/(f(a)-f(b));
                   }
	return c;	  
}


float newtonraphson(float a,float E) {
float b;
b =a-f(a)/turev(a);
while (fabs(f(b)-f(a))>E)
{
a=b;
b=a-f(a)/turev(a);
}
return b; 
}



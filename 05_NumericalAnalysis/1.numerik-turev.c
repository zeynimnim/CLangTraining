#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define x 50
int main() {
int i,n;
int d[x],k[x];
float h,turev,denk,denk2,c,sayi,gerceksayi;   /*bu kýsýmda fonksiyonu alýyoruz*/
printf("Turevini bulmak istediginiz sayi degeri: ");
scanf("%f",&sayi);
printf("Artis miktari: ");
scanf("%f",&h);
printf("Fonksiyonun eleman sayisi: ");
scanf("%d",&n);
denk=0;
    gerceksayi=sayi;
    sayi=(float)sayi+h;
for (i=0;i<n;i++)  {
     printf("%d. Elemanin derecesi: ",i+1);
     scanf("%d",&d[i]);
     printf("%d. Elemanin katsayisi: ",i+1);
     scanf("%d",&k[i]);
     c=(float)pow(sayi,d[i]);       /*bu kýsýmda x degerini yerine koyuyoruz*/
     denk= (float) denk + k[i]*c;
                    }
                    denk2=0;
                    sayi=(float)sayi-2*h;
                    for(i=0;i<n;i++){
                       c=(float)pow(sayi,d[i]);
                       denk2= (float)denk2 + k[i]*c;
                                    }            /*numerik turev formülünü uyguluýyoruz*/
                                  turev=(float)(denk-denk2)/(2*h);
 printf("%f noktasinin girilen fonksiyona gore numerik turevi ==> %f ",gerceksayi,turev);
system("pause"); 
return 0;
            }

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define x 100                 
int main() {
	int i,j,n,k,temp,mtr[x][x];
	
	printf("Kare matrisin satir ve sutun sayisi kactir: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
	        printf(" %d. satir %d. sutundaki sayi: ",i+1,j+1);
			scanf("%d",&k);
	        mtr[i][j]=k;	
	                   	}
	               	}
	printf("\n");
	               	        	
	    for(i=0;i<n;i++) {
	    	for(j=0;j<n;j++) {
	        printf(" %d ",mtr[i][j]);
	                        } printf("\n");
                         }
	               	
	for(i=0;i<n-1;i++) {     /*tüm matris elemanlarini switch yaparsak matrisimiz deðiþmezdi bu yüzden sadece üst üçgeni aldýk*/
	   	for(j=i+1;j<n;j++) {
	       temp=mtr[i][j];	
	       mtr[i][j]= mtr[j][i];
	       mtr[j][i]=temp;
	                       }
                       }
                       
   printf("\nGirilen matrisin transpozesi:\n\n");  
    	for(i=0;i<n;i++) {
		 for(j=0;j<n;j++) {
		printf(" %d ",mtr[i][j]);
                       	  }printf("\n");
                         }	  
		system("pause");				 
		return 0;				   	
           }
           

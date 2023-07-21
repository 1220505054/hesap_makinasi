#include <stdlib.h>
#include <math.h>

int main()
{
  //degiskenler tanimlanir
    int secim1, secim2;
    int sayi1, sayi2, islem, islemSecimi;
   
//kullanilmak istenen hesap makinesi secilir
    printf("1-Standart Hesap Makinesi \n");
    
    printf("2-Alan ve Cevre Hesaplayici \n");
    
    printf("3-Sicaklik Hesaplayici \n");
    
    printf("\n Isleminizi seciniz : ");    
    
    
    	scanf("%d", &islem);
    	//kullaniciya deger kumesi sectirilir
    switch(islem)
	{
        case 1:
            printf("1-Tam Sayi\n");
            printf("2-Karmasik Sayi\n");
            printf("Islemi seciniz.\n");
            	scanf("%d",&secim1);
            
              switch(secim1)
			  {
              	case 1: //kullanici tarafindan islem yapilacak degerler girilir
              	  printf("1. Sayiyi giriniz.");              	
              	  	scanf("%d", &sayi1);
              	  printf("2. Sayiyi giriniz.");
              	  	scanf("%d", &sayi2);
              	  	
              	  printf("\n\n1.Toplama\n");
              	  printf("\n\n2.Carpma\n");
              	  //sayilarla yapilacak islem belirlenir
              	  printf("Islemi seciniz:");
              	  	scanf("%d", &islemSecimi);
              	  	
              	  switch(islemSecimi)
					{
              	  	case 1:
              	  		printf("%d", sayi1+sayi2);
              	  		break;
              	  	case 2:
						printf("%d", sayi1*sayi2);
						break;
					default: 
					    printf("Hatali islem secimi.Lutfen kontrol ediniz");
						break;		
					}
					break;
					
				case 2:
				   printf("islem yapmak istediginiz iki karmasik sayiyin katsayilarini seciniz \n");
				   
 							int ax,bx;
 							
 							scanf("%d",&ax);
 							scanf("%d",&bx);
 							printf("yapmak istediginiz islemi seciniz: \n");
 							
 							int altsecim2; 
 							
 									printf("1. toplama :\n");
 									printf("2. carpma :\n");
					 					scanf("%d",&altsecim2);	
					 			if(altsecim2 == 1)
								 {
					 				double toplam = ax + bx;
					 				
							   	printf("iki karmasik sayinin toplami %lfi\n" , toplam);
							}
								else if (altsecim2==2){
							 		double carpim = ax*bx;
							 	
							 	printf("bu iki sayinin carpimi %lfi\n" , carpim);
							 	
							 }
							 
					 break ; 
			  }
			  
		case 2:
			//Alan ve cevre hesaplama
		
		    printf("Lutfen islem yapmak istediginiz sekili seciniz:\n");
            printf("1. Dikdortgen\n");
            printf("2. Ucgen\n");
            printf("3. Daire\n");	
            
			int soru2Secim;
			int hesapsecim;
			
			scanf ("%d" , &soru2Secim ) ;
			switch (soru2Secim)
			{
				
 			
 			    case 1:
 			    	// dikdörtgen islemleri
		    printf("dikdortgenin kisa ve uzun kenar uzunlugunu giriniz\n");
		    
		    
		    double x,y;//degisken tanimlanir
		    
		    scanf("%lf %lf", &x, &y);
		    
		           	printf("lutfen cevre hesaplamasi icin biri alan hesaplamasi icin ikiyi seciniz: \n"); //kullanicinin istegi sorulur
		           	
            scanf("%d",&hesapsecim); 
            
            if(hesapsecim==1)//if dongusu kullanarak cevre ve alan hesabi 
			{
            	// dikdörtgenin çevresi
            	
				 double cevre = 2*(x+y);
				printf("dikdortgenin cevresi: %lf \n",cevre);
			}
            else if(hesapsecim==2)
			{
            	 // dikdörtgenin alanini hesapla
            	 
            	 
            	 double alan = x*y;
            	 
            	 printf("dikdortgenin alani: %lf \n",alan);
			}
			else {
				printf("isleminizi kontrol ediniz \n");
			}
 			break;
 			
 			case 2: //ucgen icin hesaplama algoritnasi
 			
 			
 			
 			
				printf("Lutfen ucgenin kenar uzunluklarini giriniz :\n");
				
				
            double knr1, knr2, knr3;//degisken tanimlanir
            //kullanicidan degiskenlere deger atamasi istenir
            	scanf("%lf",&knr1);
            	scanf("%lf",&knr2);
            	scanf("%lf",&knr3);
            	
            	
             double ucgenCevre = knr1 + knr2 + knr3;
             
            		printf("lutfen cevre hesaplamasi icin bire alan hesaplamasi icin ikiye basiniz: \n");
            	
            		scanf("%d",&hesapsecim);
            		
            if(hesapsecim==1)
			{
            	// Üçgenin çevresini hesapla 
				 	printf("ucgenin cevresi :%lf \n",ucgenCevre);
			}
            else if(hesapsecim == 2)
			{
            	 // Üçgenin alanini hesaplamak icin (Heron formülü kullanilarak)
            	 
            	 
            	 			double cevreyari = ucgenCevre/2;
            	 			double alankare = (cevreyari * (cevreyari - knr1) * (cevreyari - knr2) * (cevreyari - knr3));
            	 			double alan = sqrt(alankare);
            	 	printf("ucgenin alani: %lf", alan);
			}
			else {
					printf("Sectiginiz islemi kontrol ediniz \n");
			}
 			break;
 			
 			
 			    case 3: // daire icin hesaplamalar
 			    
 			    
 			    printf("Dairenin yaricapini giriniz:\n");
 			    //hesaplanmak istenen dairenin yaricapi girilir
 				double a;
 				
 				
 				scanf("%lf",&a);
 				
 				
 				 	printf("lutfen cevre hesaplamasi icin biri alan hesaplamasi icin ikiyi seciniz: \n");
            scanf("%d",&hesapsecim); 
            
            if(hesapsecim == 1){
            	// dairenin çevresini hesapla 
				 double cevre = 2*3.14*a;
				 printf("dairenin cevresi: %lf \n",cevre);
			}
            else if(hesapsecim==2){
            	 // dikdörtgenin alanini hesapla
            	 double alan = 3.14*a*a;
            	 
            	 printf("dairenin alani: %lf \n",alan);
			}
			
			default: 
			printf("Lutfen isleminizi kontrol edin...\n");
			
			break;
			}
				
								
		 case 3: //Sicaklik Hesaplayici algoritmasi
		    printf("Hesaplamak istediginiz sicaklik degerinin birimini secin \n");
		    
					 	printf("1: Kelvin \n");
					 	printf("2: Fahrenheit \n");
					 	
					 	//kullaniciya secim yaptirarak donusumler yapilir.
					 	int birimsecim;
					 	
					 	scanf("%d",&birimsecim);
					 	
					 	if(birimsecim == 1){
					 		
					 		printf("Sicakligin Kelvin degerini giriniz :\n");
					 		double degerK;
					 		scanf("%ld",&degerK);
					 		
					 		//verilen formulle kod islemleri yapar
					 		double FahDonus = (9/5)*(degerK-273.15)+32;
					 		printf("Kelvin cinsinden verilen sicakligin fahrenheit derecesi : %ld",degerK);
						 }
						 else if(birimsecim==2){
						 		printf("Sicakligin Fahrenheit degerini giriniz :\n");
						 		
						 		
					 		double degerF;
					 			scanf("%lf",degerF);
					 		
					 		double Kelvin = (5/9)*(degerF-32)+273.15;
					 		
					 		printf("Fahrenheit cinsinden verilen sicakligin Kelvin derecesi : %lf",Kelvin);
						 }		
				break;
			}        
			
    }

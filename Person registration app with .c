#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>
#include <conio.h>
#define  UZUNLUK 10 

// define komutu bütün programlar icin tanımlama yapmada kullanilir.


char ad[UZUNLUK][20];
char soyad[UZUNLUK][20];
char adres[UZUNLUK][20];
char telefon[UZUNLUK][20];
char email[UZUNLUK][20];
char dogumtarihi[UZUNLUK][20];
char dogumyeri[UZUNLUK][20];
char meslek[UZUNLUK][20];


int cnt=0;


int menu();

void kisiEkle();

void isimAra();

void soyadAra();

void adresAra();

void yazdir(int , int);

void listele();

void kayitYap(char *);



int main()

{
      
      system("color B");
      int secim;
      secim=menu();

      while (secim!=0)
      {

        switch (secim)
        {
        case 1:
            kisiEkle();
            break;

        case 2:
            isimAra();
            break;

        case 3:
            soyadAra();
            break;

        case 4: 
            adresAra();
            break;

        case 5:
            listele();
            break;

            default:
            printf("Yanlis secim yaptiniz");
            break;
        }

        secim=menu();
        
      }


    return  0;
}


int menu()

{
    int secim;
    system("color B");
    printf("\n\tKISI KAYIT UYGULAMASI\n");
    printf("\n\t1-Kisi kaydet");
    printf("\n\t2-Isim ara");
    printf("\n\t3-Soyad ara");
    printf("\n\t4-Adres ara");
    printf("\n\t5-Kayitlari Listele");
    printf("\n\t0-Cikis");
    printf("\n\tSeciminiz: ");
    scanf("%d",&secim);

    system("cls");
    printf("\n\n");
    
    return secim;

  return 0;

}

void kisiEkle()
{

    system("color B");
    printf("Ad: ");
    kayitYap(ad[cnt]);
    printf("Soyad: ");
    kayitYap(soyad[cnt]);
    printf("Adres: ");
    kayitYap(adres[cnt]);
    printf("Telefon: ");
    kayitYap(telefon[cnt]);
    printf("Email: ");
    kayitYap(email[cnt]);
    printf("Dogum Tarihi: ");
    kayitYap(dogumtarihi[cnt]);
    printf("Dogum Yeri: ");
    kayitYap(dogumyeri[cnt]);
    printf("Meslek: ");
    kayitYap(meslek[cnt]);

    printf("\n\nKayit basariyla tamamlandi\n\n");

    cnt++;

}


void isimAra()

{
    system("color B");
    char aranan[20];
    printf("Aradiginiz isim: ");
    kayitYap(aranan);

    int i;
    int j;


    while  (i<cnt) 
    {
        if (!strcmp(ad[i],aranan))
        {
            yazdir(i,j);
            j++;
         
        }

        i++;

    }

    if (j==0)
    {
        printf("Aradiginiz isim bulunamadi\n\n",aranan);
    }

}

void soyadAra()

{
    
    system("color B");
    char aranan[20];
    printf("Aradiginiz soyad: ");
    kayitYap(aranan);

    int i;
    int j;
    i=0;
    j=0;
    while(i<cnt)
    {
        if (!strcmp(soyad[i],aranan))
        {
            yazdir(i,j);
            j++;
        }

        i++;
    }
    
    if (j==0)
    
        printf("Aradiginiz soyad bulunamadi\n\n",aranan);
    
    
        
}

void adresAra()
{
char aranan[20]; 
	printf("Aradiginiz sehir  : "); kayitYap(aranan); 
	int i=0, j=0; 
	while( i<cnt ) 
	{
		if( !strcmp( aranan, adres [i] ) )
		{
			yazdir(i,j); 
			j++; 
		}
		i++; 
	 } 
	 if( j==0)
	 printf("%s şehir kaydı yok !\n", aranan ); 
	
}



void yazdir(int i , int j)

{
   
    
   if(j==0)
    
    if( j==0 ) 
	printf("%-20s%-20s%-20s%-20s\n","AD","SOYAD", "ADRES", "MESLEK","TELEFON","EMAIL","DOGUM TARİHİ","DOGUM YERİ");  
	printf("%-20s%-20s%-20s%-20s\n", ad[i], soyad[i], adres[i], meslek[i],telefon[i],email[i],dogumtarihi[i],dogumyeri[i]);  

}


void listele()

{

   int i;
   i=0;
   
   system("color B");
   printf("%-20s%-20s%-20s%-20s\n","AD","SOYAD", "ADRES", "MESLEK","TELEFON","EMAIL","DOGUM TARİHİ","DOGUM YERİ");
   while(i<cnt)
   {
       printf("%-20s%-20s%-20s%-20s\n", ad[i], soyad[i], adres[i], meslek[i],telefon[i],email[i],dogumtarihi[i],dogumyeri[i]);
       i++;
   }

   if(i==0)
   {

       system("cls");
       printf("Kayit bulunamadi\n\n");
   }
   

}


void kayitYap(char * ptr)

{
   fgets(ptr,20,stdin);
   int n;
   n=strlen(ptr);
   ptr[n-1]='\0';

}


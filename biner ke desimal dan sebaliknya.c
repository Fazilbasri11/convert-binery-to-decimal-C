//Fazil Basri (1908107010032)
//komputasi numerik B (2020)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

//deklarasi
void menu();
void desimal_binari();
void Tutup();

//mulai

void main(int argc, char const *argv[]){//tampilan menu
int pilih;
menu:
system("cls");
printf("Pilihan Menu :\n");
printf("1. Desimal ke Biner \n2. Biner ke desimal\n3. Tutup Program\n");
printf("Input pilihanmu :\n");
scanf("%d",&pilih);
switch(pilih){
	case 1:desimal_binari();
	getche();
	goto menu;
	case 2:binary_decimal();
	getche();
	goto menu;
	case 3:Tutup();
	break;
	default:printf("\nMohon Maaf Pilihan Anda Salah, tekan Enter");
				getche();
				goto menu;
	}
}

void desimal_binari(){ // desimal ke binari
	int d,c,k;
	printf("masukkan nomer desimal:");
	scanf("%d",&d);
	printf("%d dalam angka biner \n",d);
	for (c = 20; c >=0;c--)
	{
		k=d>>c;
		if (k&1)
		{
			printf("1");
		}
		else{
			printf("0");
		}
	}
	printf("\n\nTekan enter untuk ke menu");
}
int binary_decimal() // biner ke desimal
{
    int n;
    char c;

    printf("masukkan nomer biner: ");
    scanf("%d", &n);
    printf("%d dalam biner = %d dalam desimal\n\nTekan enter untuk ke menu", n, binary(n));

    return 0;
}

//Function to convert binary ke decimal.
int binary(int n)
{
    int decimal = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
  return decimal;
}

void Tutup(){system("cls");// menghapus tampilan program 
}

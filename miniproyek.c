#include <stdio.h>
#include <windows.h>

int xx=1, xy=1, terpilih(), core(), jenis(), sewakursi(), checkout(), tutup(), first(), bisnis(), ekonomi(), cek1(), jumlahfir = 6, jumlahbis = 20, jumlaheko = 150, fir(), bis(), eko();
int cek2(), cek3();
void header(), help(),  welcome();
char kursi, pilih, in, name[250];
int i, l, n, j, k, o, p;
int namafir[6][6], namabis[15][15], namaeko[150][150];

int main(){
	system("COLOR 04");
	welcome();
	core();
}

int core(){
	header();
	printf("  Menu :\n");
	printf("  [1] Jenis Kursi\n  [2] Beli Ticket\n  [3] Pembatalan\n  [4] Cek Nama First\n  [5] Cek Nama Bisnis\n  [6]Cek Nama Ekonomi\n  [7]Help\n  [8]Exit\n\n");
	terpilih();
}

void welcome(){

	printf("\n");
	for (i = 1; i < 4; i++){
		printf("\n");
	}
	printf("                                    Link Start\n");
	printf("                                    ");
	for (l = 0; l < 6; l++){
	printf(".");
	Sleep(500);
		}
	system("cls");
	printf("\n");
	for (i = 1; i < 7; i++){
		printf("\n");
	}
	printf("                                  Pengecekan Sistem\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
	printf(".");
	Sleep(500);
		}
	system("cls");
}

void header(){
	printf("\n UI AIR\n");
	printf(" TICKET PESAWAT\n");
	printf("Umum\n");
	printf(" -------------------------\n");
	printf(" =========================\n");
	printf(" -------------------------\n");
	
}

int terpilih(){
	printf("\n Apa yang ingin anda pilih : ");
	fflush(stdin);
		scanf("%c", &pilih);
		switch(pilih){
			case '1':
				system ("cls");
				jenis();
				break;
			case '2':
				system ("cls");
				sewa();
				break;
			case '3':
				system ("cls");
				checkout();
				break;
			case '4':
				system ("cls");
				cek1();
				break;
			case '5':
			    system ("cls");
				cek2();
				break;
			case '6':
				system ("cls");
				cek3();
				break;
			case '7':
				system ("cls");
				help();
				break;
			case '8':
				tutup();
				break;
			default:
				printf(" \nPilihan anda tidak tersedia!");
				return terpilih();

	}
}

int jenis(){
	header();
	printf("Jenis Kursi:\n");
	printf("[1]Kursi First : Rp. 20.000.000\n");
	printf("[2]Kursi Bisnis   : Rp. 10.000.000 \n");
	printf("[3]Kursi Ekonomi  : Rp. 700.000\n\n");
	printf("Tekan [Enter] untuk Ke Main Menu\n");
	getch();
	system("cls");
	return core();

}

int tutup(){
	system("cls");
	printf("\n");
	for (i = 1; i < 7; i++){
		printf("\n");
	}
	printf("                                Menutup Program\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
		printf(".");
		Sleep(500);
	}
	printf("\n\n\n\n");

	exit(0);
}

int sewa(){
	header();
	printf("  Nama : \n");
	scanf(" %[^\n]s", name);
	while(xx == 1){
		printf("Kursi Tersedia Untuk First	: %d\n", jumlahfir);
		printf("Kursi Tersedia Untuk Bisnis	: %d\n", jumlahbis);
		printf("Kursi Tersedia Untuk Ekonomi	: %d\n", jumlaheko);
		printf("  first, bisnis, atau ekonomi? [F/B/E] : ");
		fflush(stdin);
		scanf("%c", &kursi);
		if (kursi == 'F'){
			system("cls");
			first();
			xx=0;
		}
		else if (kursi == 'B'){
			system("cls");
			bisnis();
			xx = 0;
		}
		else if (kursi == 'E'){
			system("cls");
			ekonomi();
			xx=0;
		}
		else{
			printf("  Input anda salah, tolong cek kembali!\n");
			xx = 1;
		}
	}
	
}
int first(){
	header();
	printf("Apakah anda ingin membeli kursi first\n");
		printf("Tekan [y] untuk membeli\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
	printf("Masukkan banyaknya nama yang diinginkan : "); 
	scanf("%d", &n); 
	fflush(stdin);
	system("cls");
	
for(i=0; i<n; i++){
		printf("Masukkan nama ke %d : ", i+1); 
		scanf("%[^\n]", &namafir[i]); 
		fflush(stdin);
		system("cls");
	}
		jumlahfir--;
		header();
		printf("Jumlah Kursi : %d \n", jumlahfir);
		printf("Kursi Telah Berhasil Dipesan\n");
		printf("Terimakasih %s telah memesan Kursi di UI Air\n",name);
		printf("Tekan [Enter] untuk kembali ke Main Menu");
		getch();
		system("cls");
	}
	return core();
}

int bisnis(){
	header();
	printf("Apakah anda ingin membeli kursi Bisnis\n");
		printf("Tekan [y] untuk membeli\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
	system("cls");
	printf("Masukkan banyaknya nama yang diinginkan : "); 
	scanf("%d", &o); 
	fflush(stdin);
	system("cls");
	
		for(j=0; j<o; j++){
		printf("Masukkan nama ke %d : ", j+1); 
		scanf("%[^\n]", &namaeko[j]); 
		fflush(stdin);
		system("cls");
	}
		
		jumlahbis--;
		header();
		printf("Jumlah Kursi : %d \n", jumlahbis);
		printf("Kursi Telah Berhasil Dipesan");
		printf("Terimakasih %s telah memesan Kursi di UI Air\n", name);
		printf("Tekan [Enter] untuk kembali ke Main Menu");
		getch();
		system("cls");
	}
	return core();
}

int ekonomi(){
	header();
	printf("Apakah anda ingin membeli kursi Ekonomi\n");
		printf("Tekan [y] untuk membeli\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
	system("cls");
	printf("Masukkan banyaknya nama yang diinginkan : "); 
	scanf("%d", &p); 
	fflush(stdin);
	system("cls");
	
		for(k=0; k<p; k++){
		printf("Masukkan nama ke %d : ", k+1); 
		scanf("%[^\n]", &namaeko[k]); 
		fflush(stdin);
		system("cls");
	}
		
		jumlaheko--;
		header();
		printf("Jumlah Kursi : %d \n", jumlaheko);
		printf("Kursi Telah Berhasil Dipesan");
		printf("Terimakasih %s telah memesan Kursi di UI Air\n", name);
		printf("Tekan [Enter] untuk kembali ke Main Menu");
		getch();
		system("cls");
	}
	return core();
}

int checkout(){
	header();
	while(xy == 1){
		printf("  First,Bisnis,Ekonomi : ");
		fflush(stdin);
		scanf("%c", &kursi);
		if (kursi == 'F'){
			system("cls");
			fir();
			xy=0;
		}
		else if (kursi == 'B'){
			system("cls");
			bis();
			xy = 0;
		}
		else if (kursi == 'E'){
			system("cls");
			eko();
			xy=0;
		}
		else{
			printf("  Input anda salah, tolong cek kembali!\n");
			xy = 1;
		}
	}
	
}
int fir(){
	header();
	printf("Apakah anda tidak jadi membeli first class\n");
	printf("Tekan [y] untuk checkout\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlahfir ++;
		header();
		printf("Jumlah Kamar: %d \n", jumlahfir);
		printf("Kursi Telah Berhasil Checkout");
		getch();
		system ("cls");
	}
	return core();
}

int bis(){
	header();
	printf("Apakah anda tidak jadi membeli bisnis class\n");
	printf("Tekan [y] untuk checkout kursi\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlahbis ++;
		header();
		printf("Jumlah Kursi: %d \n", jumlahbis);
		printf("Kursi Telah Berhasil Checkout");
		getch();
		system ("cls");
	}
	return core();
}

int eko(){
	header();
	printf("Apakah anda tidak jadi membeli ekonomi class\n");
	printf("Tekan [y] untuk checkout kursi\n");
	fflush(stdin);
	scanf("%c", &in);
	
	if (in == 'y'){
		system("cls");
		jumlaheko++;
		header();
		printf("Jumlah Kursi: %d \n", jumlaheko);
		printf("Kursi Telah Berhasil Checkout");
		getch();
		system ("cls");
	}
	return core();
}

int cek1(int i){
	header();
	printf("First Class\n");
		for(i=0; i<n; i++){
		printf("Nama ke %d : %s\n", i+1, namafir[i]);
	getch();
	system ("cls");
        return core();
    }}
    
int cek2(int j){
	header();
	printf("Bisnis Class\n");
		for(j=0; j<o; j++){
		printf("Nama ke %d : %s\n", j+1, namabis[j]);
			getch();
			system("cls");
        return core();
    }}
    
int cek3(int k){
	header();
		printf("Ekonomi Class\n");
		for(k=0; k<p; k++){
		printf("Nama ke %d : %s\n", k+1, namaeko[k]);
		getch();
		system("cls");	
        return core();	
	}}

void help(){
	header();
	printf("1. Masukkan angka sesuai dengan perintah program\n");
	printf("2. Tekan [Enter] untuk kembali ke main menu\n");
	printf("3. Tekan y untuk melanjutkan pemesanan anda\n");
	getch();
	system("cls");
	return core();
	}

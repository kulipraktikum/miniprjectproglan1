#include<windows.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int x[2][2]; //barang
int barang(), jumlahs(), nanya(), keluar(), intro(), kasir(), y[2][2], hitung(), tolong();

int main(){
	intro();
	int a;
		printf("\033[1;34m"); //warna
	printf("                    ------TOKO BAHAGIA bin CITRA LESTARI------\n");
	printf("JL.H. Agus salim NO.26E, RT1/RW1, KB SIRIH, Kec. MENTENG, KOTA JAKARTA PUSAT, DKI JAKARTA");
		printf("\033[0m");
	printf("\n1. Masukkan jumlah barang digudang");
	printf("\n2. jumlah barang yang ada digudang");
	printf("\n3. kasir");
	printf("\n4. bantuan");
	printf("\n5. exit");
	printf("\nInputan anda : ");
	scanf("%d", &a);
	system("cls");
	
	if(a==1){
		barang();
	}
	else if(a==2){
		jumlahs();
	}
	else if(a==3){
		kasir();
	}
	else if(a==4){
		tolong();
	}
	else if (a==5){
		keluar();
	}
	else{
		printf("\n\n\n                 INPUT YANG ANDA MASUKKAN SALAH !");
		nanya();
	}
}

int barang(){
 system("cls");
 printf("------Masukkan jumlah barang digudang------\n");
 printf("\nketerangan : \n");
 printf("barang[0,0] = AIR MINERAL\nbarang[0,1] = OBAT BATUK CAP RUSA\nbarang[1,0] = LABEL HITAM\nbarang[1,1] = MINUMAN MUTLAK\n");
 printf("\n\nmasukkan inputan barang : \n");
	
	int i,j,k,l; //loop
	int f, o,p,q,r;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("barang[%d,%d] = ",i,j);
	scanf("%d", &x[i][j]);
	
	}
}
	o = x[0][0] ;
	p = x[0][1] ;
	q = x[1][0] ;
	r = x[1][1] ;
	
	x[0][0] = o - y[0][0];
	x[0][1]	= p - y[0][1];
	x[1][0] = q - y[1][0];
	x[1][1] = p - y[1][1];
printf("\njadi jumlah barang sekarang [0,0] : %d", x[0][0]-y[0][0]);
printf("\njadi jumlah barang sekarang [0,1] : %d", x[0][1]-y[0][1]);
printf("\njadi jumlah barang sekarang [1,0] : %d", x[1][0]-y[1][0]);
printf("\njadi jumlah barang sekarang [1,1] : %d", x[1][1]-y[1][1]);



nanya();

}


int jumlahs(){
	system("cls");
	int q,w,e,r;
	q = x[0][0] - y[0][0];
	w = x[0][1] - y[0][1];
	e = x[1][0] - y[1][0];
	r = x[1][1] - y[1][1];
	printf("\033[1;34m");	
printf("------JUMLAH BARANG DIGUDANG------\n");
printf("\033[0m");
	printf("\033[1;31m");	
printf("keterangan :\nbarang[0,0] = AIR MINERAL\nbarang[0,1] = OBAT BATUK CAP RUSA\nbarang[1,0] = LABEL HITAM\nbarang[1,1] = MINUMAN MUTLAK\n");
printf("\033[0m");
printf("\njadi jumlah barang sekarang [0,0] : %d", q);
printf("\njadi jumlah barang sekarang [0,1] : %d", w);
printf("\njadi jumlah barang sekarang [1,0] : %d", e);
printf("\njadi jumlah barang sekarang [1,1] : %d", r);
	
	nanya();

}

int nanya(){
	char c[100];
	printf("\n \n Kembali Menu Utama ? \n Masukkan (y/n) : \n y:yes.\n n:no. \n ");
	scanf("%s", &c);
	if(strcmp(c,"y") == 0){
		system("cls");
		main();
		
	}
	else if(strcmp(c,"n") == 0){
		system("cls");
		keluar();
	}
	else{
		system("cls");
		printf("inputan yang anda masukkan salah\n\n");
		nanya();
	}

	}


int keluar() {
	system("cls");
	printf("Terimkasih");
 	return 0;
}

int intro(){
	int x; 
	double y;
   char text1[]=    "\n\n \t\t\t Welcome To Our Program ";
   char text2[]=    "\n\n \t\t\t By ";
   char text3[]=    "\n\n \t\t\t Taka and Saddam ";
    printf("\n\n");
    for(x=0; text1[x]!=NULL; x++)
   {
     printf("%c",text1[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text2[x]!=NULL; x++)
   {
     printf("%c",text2[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text3[x]!=NULL; x++)
   {
     printf("%c",text3[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   getch();
   
	system("cls");
}

int kasir(){
	int i,j,s,t,u,v;
	float hargas,coba;
	int hitungs, diskons;
	printf("\033[0;31m");
	printf("-----kasir-----");
	printf("\033[0m");
	printf("\n\n\n");
 	printf("barang[0,0] = AIR MINERAL\nbarang[0,1] = OBAT BATUK CAP RUSA\nbarang[1,0] = LABEL HITAM\nbarang[1,1] = MINUMAN MUTLAK\n");
	printf("\n\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("masukkan jumlah barang yang mau dibeli [%d,%d] : ",i,j);
			scanf("%d", &y[i][j]);
		}
	}
s =	y[0][0];
t =	y[0][1];
u = y[1][0];
v = y[1][1];
	
	hitungs=hitung(s,t,u,v);
	printf("jadi total harga : Rp %d", hitungs);	
	nanya();
}

int hitung(int s, int t, int u, int v){
	int jumlah;
	jumlah = (s*55000) + (t*540000) + (u*760000) + (v*450000);
}

int tolong(){
	system("cls");
	printf("SELAMAT DATANG DI BANTUAN PROGRAM KAMI\n");
	printf("1. Masukkan input yang ingin anda tuju, sesuai dengan pilihan yang ada.\n");
	printf("2. jalankan aplikasi dengan mengisi isi barang setiap pagi harinya.\n");
	printf("3. jangan lupa mengecek stok barang.");
	printf("4. selamat mengggunakan");
	
	nanya();
}



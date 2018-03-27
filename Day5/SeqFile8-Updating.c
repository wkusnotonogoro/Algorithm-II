#include <stdio.h>
#include <string.h>

int main() {

	struct {
		char prodi[3];
		char nama[100];
		char nilai[3];
	}rekaman;

	FILE *arsipMatkul;
	FILE *arsipMatkulUpdate;

	arsipMatkul = fopen("ArsipMatKulA.txt", "r");
	arsipMatkulUpdate = fopen("ArsipMatKulUpdate.txt", "w");

	// baca data pertama
	fscanf(arsipMatkul, "%s %s %s\n", &rekaman.prodi, 
		&rekaman.nama, &rekaman.nilai);

	// baca data 
	do{
		  //core logic 
		 //jika prodi if dan nama = "sama"
	  if((strcmp(rekaman.prodi,"SI") == 0) && (strcmp(rekaman.nama,rekaman.nama) == 0)){
	  	//ganti nilai 
	  		strcpy(rekaman.nilai, "70");
	}
	  //jika prodi if dan nama = "ccc"
	 	 if((strcmp(rekaman.prodi,"IF") == 0) && (strcmp(rekaman.nama,"ccc") == 0)){
	  	//ganti nilai menjadi 85 
	  	strcpy(rekaman.nilai, "85");
	  }
	 //jika prodi if dan nama = "aaa"
		  if((strcmp(rekaman.prodi,"IF") == 0) && (strcmp(rekaman.nama,"aaa") == 0)){
		  	//ganti nilai menjadi 45 
		  	strcpy(rekaman.nilai, "45");
		  }
	 //jika prodi if dan nama = "bbb"
		  if((strcmp(rekaman.prodi,"IF") == 0) && (strcmp(rekaman.nama,"bbb") == 0)){
		  	//ganti nilai menjadi 60 
		  	strcpy(rekaman.nilai, "60");
		  }
	 //jika prodi if dan nama = "fff"
		  if((strcmp(rekaman.prodi,"IF") == 0) && (strcmp(rekaman.nama,"fff") == 0)){
		  	//ganti nilai menjadi 88 
		  	strcpy(rekaman.nilai, "88");
		  }
	 //jika prodi if dan nama = "ddd"
		  if((strcmp(rekaman.prodi,"SI") == 0) && (strcmp(rekaman.nama,"ddd") == 0)){
		  	//ganti nilai menjadi 50 
		  	strcpy(rekaman.nilai, "50");
		  }
	  fprintf(arsipMatkulUpdate, "%s %s %s\n", rekaman.prodi, rekaman.nama, 
	  	rekaman.nilai);

	  	//baca data berikutnya
	  fscanf(arsipMatkul, "%s %s %s\n", &rekaman.prodi, 
		&rekaman.nama, &rekaman.nilai);
	  
	}while(!feof(arsipMatkul));

	fclose(arsipMatkul);
	fclose(arsipMatkulUpdate);
	     
	return 0;
}

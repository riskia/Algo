#include <stdio.h>

main()
{
	struct data_barang
	{
		char nama[30];
		int jumlah;
		int harga;
	};
	struct data_barang data[5];
	
	for(int i=0;i<5;i++)
		{
			printf("Input Barang Kode M0%d\n",i+1);
			printf("Nama Barang = ");scanf("%s",&data[i].nama);
			printf("Jumlah = ");scanf("%d",&data[i].jumlah);
			printf("Harga = ");scanf("%d",&data[i].harga);
			printf("\n");
		}
		printf("\n\n");
		printf("KODE	NAMA BARANG	JUMLAH	HARGA	TOTAL\n");
		printf("=======================================================\n");
	
	int total,jumtotal;
	for(int i=0;i<5;i++)
		{
			printf(" M0%d",i+1);
			printf(" 	%s	",data[i].nama);
			printf("	%d ",data[i].jumlah);
			printf("	%d ",data[i].harga);
			printf("	%d",total=data[i].jumlah*data[i].harga);
			printf("\n");
			jumtotal+=total;
		}
	printf("\n			 Jumlah Total = %d",jumtotal);

}

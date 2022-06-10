//Program undirected graph cerita UAS SD 
#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 100
using namespace std;

int main()
{
	//inialisasi variabel data
	int graph[N][N];
	int vertex, edge;
	int jumlah,vertex_1,vertex_2,bobot,naga,pedagang,kastil;

	printf("==========================\n");
	printf(" Program Undirected Graph \n");
	printf("==========================\n\n");

	printf("*Invasi Naga yang Menyerang Kota*\n\n");

	//input data vertex dan edge yang diinginkan
	printf("Masukkan vertex & edge (jumlah kota britain) : \n");
	scanf("%d%d", &vertex, &edge);

	//proses untuk pengulangan graph
	for(int i=0;i<vertex;++i)
	{
		for(int j=0;j<vertex;++j)
		{
			graph[i][j]=0;
		}
	}

	//inilisasi vertex_1 = u, vertex_2 = v, dan bobot = w kemudian input datanya
	printf("Masukkan (u v w) : \n");
	//proses pengulangan berdasarkan edge yang dimasukkan
	for(int i=0;i<edge;++i)
	{
		scanf("%d%d%d", &vertex_1, &vertex_2, &bobot);
		//proses untuk fungsi undirected graph
		graph[vertex_1][vertex_2] = graph[vertex_2][vertex_1] = bobot;
	}

	//input lokasi pedagang berada pada vertex berapa
	printf("\n");
	printf("Pedagang berada dikota apa (masukkan 1 data yang sama dengan u ) :\n");
	scanf("%d", &pedagang);

	//input lokasi kota yang diserang naga
	printf("\n");
	printf("Vertex kota yang diserang naga (masukkan 1 data yang sama u atau v) : \n");
	scanf("%d", &naga);

	//input lokasi kastil
	printf("\n");
	printf("Kastil raja berada dimana (masukkan 1 data yang sama dengan v) : \n");
	scanf("%d", &kastil);

	//mencetak hasil output dari jalur tercepat pedagang menuju kastil
	printf("\n");
	printf("Hasil Output : \n");
	printf("%d -> %d ", pedagang, kastil);

	//input total jarak kota pedagan dengan kastil
	printf("\n");
	printf("Jarak kota : \n");
	scanf("%d", graph[bobot]);

	return 0;
	getch();
}

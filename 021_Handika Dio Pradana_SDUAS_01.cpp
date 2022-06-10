//Program undirected graph UAS SD
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
	int vertex_1,vertex_2,bobot;

	printf("==========================\n");
	printf(" Program Undirected Graph \n");
	printf("==========================\n\n");

	//input data vertex dan edge yang diinginkan
	printf("Masukkan vertex & edge : \n");
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
	printf("Masukkan data (u v w) : \n");
	//proses pengulangan berdasarkan edge yang dimasukkan
	for(int i=0;i<edge;++i)
	{
		scanf("%d%d%d", &vertex_1, &vertex_2, &bobot);
		//proses untuk fungsi undirected graph
		graph[vertex_1][vertex_2] = graph[vertex_2][vertex_1] = bobot;
	}

	//mencetak hasil output dari proses program graph tidak berarah
	printf("\n");
	printf("Hasil Output : \n");
	for(int i = 0; i < vertex; ++i)
	{
        for(int j = 0; j < vertex; ++j)
        	printf("%d ", graph[i][j]);
        printf("\n");
    }
    printf("\n");


	return 0;
	getch();
}

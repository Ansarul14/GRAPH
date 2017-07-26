#include<stdio.h>
int main(void){

int i, j;
int adj[4][4];
int value;
int edge, vertex;

printf("how many vertice?\n");
scanf("%d",&vertex);

printf("how many edge?\n");
scanf("%d",&edge);

for(i=0;i<vertex;i++){
    for (j=0;j<=edge;j++){
       printf("value of adj[%d][%d]:", i,j );
       scanf("%d",&value);
       adj[i][j]= value;

    }

  }

printf("Adjacency Matrix representation of your graph is: \n \n");

for(i=0;i<=vertex;i++){
    for (j=0;j<=edge;j++){
       printf("%d ",adj[i][j] );

    }
    printf("\n");
  }
return 0;
}

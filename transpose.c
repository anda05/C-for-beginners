#include<stdio.h>
void transpose(int matrix[][100],int r,int c){
	int transposedm[c][r];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			transposedm[j][i]=matrix[i][j];//10,11,12
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			printf("%d ",transposedm[i][j]);//01,11,21
		}
		printf("\n");
	}
}
void main(){
	int r,c;
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&r,&c);
	int matrix[100][100];
	printf("Enter the elements: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	transpose(matrix,r,c);
}


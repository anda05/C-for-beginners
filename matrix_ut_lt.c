#include<stdio.h>
void main(){
	int size,ut=1,lt=1;
	printf("Enter size: ");
	scanf("%d",&size);
	int matrix[size][size];
	printf("Enter elements: ");
	//scan value
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	//print matrix
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(matrix[i][j]!=0 && i>j)
			ut=0;
			if(matrix[i][j]!=0 && i<j)
			lt=0;	
		}
	}
	if(ut&&lt)
	printf("upper and lower triangular\n");
	else if(ut)
	printf("upper triangular");
	else if(lt)
	printf("lower triangular");
	else
	printf("neither upper nor lower");
} 
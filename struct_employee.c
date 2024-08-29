#include<stdio.h>

struct employee{
		int empNo;
		char name[20], department[50];
		float basicpay,DA,HRA,grossSalary;
	}hpe;
	
void main(){
	
	int n;
	printf("How many employee's data do you want to enter: ");
	scanf("%d",&n);
	struct employee e[n];
	
	FILE *inputfile=fopen("I_P.txt","r");
	if(inputfile==NULL){
		printf("error opening input file\n");
		return 1;
	}
	FILE *outputfile=fopen("O_P.txt","w");
	if(outputfile==NULL){
		printf("error opening output file\n");
		fclose(inputfile);
		return 1;
	}
	
	for(int i=0;i<n;i++){
		fscanf(inputfile,"%d	%s	%s	%f	%f	%f", &e[i].empNo,&e[i].name, &e[i].department,&e[i].basicpay,&e[i].DA, &e[i].HRA);
			e[i].grossSalary=e[i].basicpay+e[i].DA+e[i].HRA;
	}
	
	/*for(int i=0;i<n;i++){
		printf("\nenter data %d:\nempNo	name	dept	bp	DA	HRA\n", i+1);
		scanf("%d	%s	%s	%f	%f	%f", &e[i].empNo,&e[i].name, &e[i].department,&e[i].basicpay,&e[i].DA, &e[i].HRA);
		e[i].grossSalary=e[i].basicpay+e[i].DA+e[i].HRA;
	}*/
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			hpe = (e[i].grossSalary>= e[j].grossSalary) ? e[i]:e[j];
		}
	}
	
	fprintf(outputfile,"\n%d	%s	%s	%.2f	%.2f	%.2f	%.2f\n",  hpe.empNo,hpe.name, hpe.department,hpe.basicpay,hpe.DA, hpe.HRA, hpe.grossSalary);
	fclose(inputfile);
    fclose(outputfile);
    
    printf("\n%d	%s	%s	%.2f	%.2f	%.2f	%.2f\n",  hpe.empNo,hpe.name, hpe.department,hpe.basicpay,hpe.DA, hpe.HRA, hpe.grossSalary);
	
}




//empNo, name, department, basicPay, DA, HRA and grossSalary
#include<stdio.h>
void main(){
	struct student{
		char name[20];
		int roll;
		float p,c,m,total;
	};
	int n;
	printf("How many student's data do you want to enter: ");
	scanf("%d",&n);
	struct student s[n];
	
	for(int i=0;i<n;i++){
		printf("\nenter data %d: ", i+1);
		scanf("%s %d %f %f %f", &s[i].name,&s[i].roll, &s[i].p,&s[i].c,&s[i].m);
		s[i].total=s[i].p+s[i].c+s[i].m;
	}
	
	//bubble sort
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].total < s[j].total){
				struct student temp=s[i];s[i]=s[j];s[j]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("\n%s	%d	%.2f	%.2f	%.2f	%.2f", s[i].name, s[i].roll, s[i].p, s[i].c, s[i].m, s[i].total);
	}
}
#include <stdio.h>
struct Distance{int feet,inches;}d[2];
void main(){
	for(int i=0;i<2;i++){
		printf("Enter distance %d in feet and inches: ",i+1);
		scanf("%d %d",&d[i].feet,&d[i].inches);
	}
	int sum=((d[0].feet+d[1].feet)*12)+d[0].inches+d[1].inches;int sum1=sum/12,sum2=sum%12;
	printf("Sum of distances: %d feet %d inches",sum1,sum2);
}
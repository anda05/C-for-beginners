#include<stdio.h>
#include<math.h>

struct distance{float x,y;}d[2];

void main(){
	for(int i=0;i<2;i++){
		printf("enter x and y coordinates of point %d: ",i+1);
		scanf("%f %f",&d[i].x,&d[i].y);
	}
	float dist=sqrt(pow((d[1].x-d[0].x),2)+pow((d[1].y-d[0].y),2));
	printf("Distance: %f", dist);
}
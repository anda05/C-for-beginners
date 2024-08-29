#include<stdio.h><math.h>
struct cood{
	float x,y,w,l;
}c[2];
int main(){
	for(int i=0;i<2;i++){
		printf("enter cood %d: ",i+1);
		scanf("%f %f %f %f", &c[i].x,&c[i].y,&c[i].w,&c[i].l);
	}
	float dist=sqrt(pow((c[0].x-c[1].x),2)+pow((c[0].y-c[1].y),2));
	float halfDiag=sqrt(pow(c[0].w/2,2)+pow(c[0].l/2,2));
	
	printf("%f\n",dist);
	printf("%f\n",halfDiag);
	printf((dist<=halfDiag/2)? "True":"False");
}
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;


int main(){
	int gd=DETECT, gm;
	initgraph (&gd, &gm,NULL);
	float x1,y1,x2,y2,x,y,dx,dy;
	cout<<"Enter value of x0 and y0: ";
	cin>>x1>>y1;
	cout<<"Enter value of x1 and y1: ";
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	float m = dy/dx;
    putpixel (x,y,WHITE);
	while(x!=x1 && y!=y1){
		if(m<1){
			x=x+1;
			y=y+m;
		}
		else if(m>1){
			x=x+(1/m);
			y=y+1;
		}
		else{
			x=x+1;
			y=y+m;
		}
		putpixel (x,y,WHITE);
		delay(100);
	}
	getch();
	closegraph();
	return 0;
}

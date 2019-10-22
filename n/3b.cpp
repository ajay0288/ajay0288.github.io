#include<graphics.h> 
#include<stdio.h> 
#include<conio.h> 
#include<math.h> 

void wind(int,int,int,int); 
void draw(int,int,int,int,int,int,int,int); 
main() 
{ 
int xwmin,xwmax,ywmin,ywmax,xvmin,xvmax,yvmin,yvmax; 
int x1,x2,x3,x4,y1,y2,y3,y4; 
double sx,sy; 
int device,mode,a[8]; 
xwmin = 100; xvmin = 350; 
ywmin = 200; yvmin = 225; 
xwmax = 200; ywmax = 300; 
xvmax = 400; yvmax = 275; 
x1 = 140; x2 = 180; x3 = 180; x4 = 140; 
y1 = 240; y2 = 240; y3 = 280; y4 = 280; 
sx = float(xvmax - xvmin)/float(xwmax - xwmin); 
sy = float(yvmax - yvmin)/float(ywmax - ywmin); 
device = DETECT; 
initgraph(&device,&mode," "); 
settextstyle(3,0,2); 
outtextxy(100,50,"WINDOW TO VIEWPORT TRANSFORMATION"); 
settextstyle(3,0,2); 
outtextxy(100,125,"WINDOW"); 
settextstyle(2,0,3); 
outtextxy(100,150,"========="); 
settextstyle(3,0,2); 
outtextxy(325,125,"VIEWPORT"); 
settextstyle(2,0,3); 
outtextxy(325,150,"=========="); 
setlinestyle(DOTTED_LINE,1,1); 
draw(x1,y1,x2,y2,x3,y3,x4,y4); 
int vx1 = sx * (x1 - xwmin) + xvmin; 
int vx2 = sx * (x2 - xwmin) + xvmin; 
int vx3 = sx * (x3 - xwmin) + xvmin; 
int vx4 = sx * (x4 - xwmin) + xvmin; 
int vy1 = sy * (y1 - ywmin) + yvmin; 
int vy2 = sy * (y2 - ywmin) + yvmin; 
int vy3 = sy * (y3 - ywmin) + yvmin; 
int vy4 = sy * (y4 - ywmin) + yvmin; 
draw(vx1,vy1,vx2,vy2,vx3,vy3,vx4,vy4); 
getch(); 
closegraph(); 
} 
void wind(int xwmin,int xwmax,int ywmin,int ywmax) 
{ 
line(xwmin,ywmax,xwmax,ywmax); 
line(xwmin,ywmin,xwmax,ywmin); 
line(xwmin,ywmin,xwmin,ywmax); 
line(xwmax,ywmin,xwmax,ywmax); 
} 
void draw(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4) 
{ 
line(x1,y1,x2,y2); 
line(x1,y1,x4,y4); 
line(x3,y3,x2,y2); 
line(x3,y3,x4,y4); 
} 

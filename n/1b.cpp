#include<graphics.h> 
#include<stdio.h> 
#include<math.h> 
#include<conio.h> 
void ellipsemidpoint(int xc,int yc,int rx,int ry) 
{ 
void ellipseplotpoints(int,int,int,int); 
float rx2 = rx * rx; 
float ry2 = ry * ry; 
float tworx2 = 2 * rx2; 
float twory2 = 2 * ry2; 
float p; 
float x = 0; 
float y = ry; 
float px = 0; 
float py = tworx2 * y; 
ellipseplotpoints(xc,yc,x,y); 
p = ry2 - rx2 * ry + (0.25 * rx2); 
while(px < py) 
{ 
x++; 
px += twory2; 
if(p >= 0) 
{ 
y = y-1; 
py = py - tworx2; 
} 
if(p < 0) 
p += ry2 + px; 
else 
p += ry2 + px - py; 
ellipseplotpoints(xc,yc,x,y); 
} 
p = ry2 * (x + 0.5) * (x + 0.5) + rx2 * (y-1)*(y-1) - rx2 * ry2; 
while(y > 0) 
{ 
y--; 
py -= tworx2; 
if(p <= 0) 
{ 
x++; 
px += twory2; 
} 
if(p > 0) 
p = p+rx2-py; 
else 
p = p+rx2-py+px; 
ellipseplotpoints(xc,yc,x,y); 
} 
} 
void ellipseplotpoints(int xc,int yc,int x,int y) 
{ 
putpixel(xc+x,yc+y,RED); 
putpixel(xc-x,yc+y,GREEN); 
putpixel(xc+x,yc-y,BLUE); 
putpixel(xc-x,yc-y,YELLOW); 
} 
main() 
{ 
int xc,yc,rx,ry; 
int gdriver = DETECT,gmode; 
initgraph(&gdriver,&gmode," "); 
printf("\nENTER THE CENTER COORDINATES:\n"); 
scanf("%d%d",&xc,&yc); 
printf("\nENTER THE MAJOR AND MINOR AXES:\n"); 
scanf("%d%d",&rx,&ry); 
ellipsemidpoint(xc,yc,rx,ry); 
getch(); 
} 

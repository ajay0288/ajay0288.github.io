#include<graphics.h> 
#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
int xc,yc,r; 
void symm(int x,int y) 
{ 
putpixel(x+xc,y+yc,GREEN); 
putpixel(-x+xc,-y+yc,GREEN); 
putpixel(x+xc,-y+yc,GREEN); 
putpixel(-x+xc,y+yc,GREEN); 
putpixel(y+xc,x+yc,RED); 
putpixel(-y+xc,-x+yc,RED); 
putpixel(-y+xc,x+yc,RED); 
putpixel(y+xc,-x+yc,RED); 
} 

void bhsmcir(int r) 
{ 
int x=0,y=r,dp; 
dp = 1-r; 
while(x < y) 
{ 
if(dp < 0) 
{ 
dp += 2 * x + 1; 
symm(++x,y); 
} 
else 
{ 
dp += 2 * (x - y) + 1; 
symm(++x,--y); 
} 
} 
} 
void main() 
{ 
int gdriver = DETECT,gmode; 
clrscr(); 
initgraph(&gdriver,&gmode,"  "); 
printf("ENTER THE CENTER COORDINATES: \n"); 
scanf("%d%d",&xc,&yc); 
printf("ENTER RADIUS:\n"); 
scanf("%d",&r); 
bhsmcir(r); 
getch(); 
} 

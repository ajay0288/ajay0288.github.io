#include<stdio.h> 
#include<math.h> 
#include<graphics.h> 
#include<stdlib.h> 
void bshm(int x1,int y1,int x2,int y2); 
main() 
{ 
int x1,y1,x2,y2; 
int driver = DETECT,gmode; 
initgraph(&driver,&gmode," "); 
printf("ENTER THE STARTING CO-ORDINATE\n"); 
scanf("%d%d",&x1,&y1); 
printf("ENTER THE ENDING CO-ORDINATE\n"); 
scanf("%d%d",&x2,&y2); 
bshm(x1,y1,x2,y2); 
getch(); 
} 

void bshm(int x1,int y1,int x2,int y2) 
{ 
int x = x1,y = y1,dx,dy,s1,s2; 
int length,dp,i,temp,swap = 0; 
putpixel(x1,y1,RED); 
dx = abs(x2 - x1); 
dy = abs(y2 - y1); 
if(x2 < x1) 
s1 = -1; 
else if(x2 > x1) 
s1 = 1; 
else 
s1 = 0; 
if(y2 < y1) 
s2 = -1; 
else if(y2 > y1) 
s2 = 1; 
else 
s2 = 0; 
dp = 2 * dy - dx; 
if(dy < dx) 
{ 
temp = dx; 
dx = dy; 
dy = temp; 
swap = 1; 
} 
for(i=1;i<=dx;i++) 
{ 
if(dp < 0) 
{ 
if(swap) 
putpixel(x,y = -y+s2,RED); 
else 
putpixel(x = x+s1,y = y+s2,RED); 
dp += 2 * dy; 
} 
else 
{ 
putpixel(x = x+s1,y = y+s2,YELLOW); 
dp = dp+ 2*dy - 2*dx; 
} 
}
}

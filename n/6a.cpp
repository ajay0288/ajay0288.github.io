const no_hue = -1; 
#include<stdio.h> 
#include<math.h> 
#include<conio.h> 
#define min(a,b) (a<b?a:b) 
#define max(a,b) (a>b?a:b) 

void rgbtohsv(float r,float g,float b) 
{ 
float h,s,v; 
float max1 = max(r,max(g,h)),min1 = min(r,min(g,b)); 
float delta = max1 - min1; 
v = max1; 
if(max1 != 0.0) 
s = delta/max1; 
else 
s = 0.0; 
if(s == 0.0) 
h = no_hue; 
else 
{ 
if(r == max1) 
h = (g-b)/delta; 
else if(g == max1) 
h = 2 + (b-r)/delta; 
else if(b == max1) 
h = 4 + (r-g)/delta; 
h *= 60.0; 
if(h < 0) 
h += 360.0; 
h /= 360.0; 
printf("The HSV values are:\n"); 
printf("h = %f   s = %f   v = %f",h,s,v); 
} 
} 

void main() 
{ 
float r,g,b; 
clrscr(); 
printf("ENTER THE RGB VALUES(values from 0 to 1)\n"); 
scanf("%f%f%f",&r,&g,&b); 
rgbtohsv(r,g,b); 
getch(); 
} 

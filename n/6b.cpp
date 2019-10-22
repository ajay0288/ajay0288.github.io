#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
void hsvtorgb(float h,float s,float v) 
{ 
int i; 
float r,g,b; 
float aa,bb,cc,f; 
if(s == 0) 
r = g = b = v; 
else 
{ 
if(h == 1.0) 
h = 0; 
h *= 6.0; 
i = floor(h); 
f = h - i; 
aa = v * (1-s); 
bb = v * (1-(s*f)); 
cc = v * (1-(s*(1-f))); 
switch(i) 
{ 
case 0: 
r = v; 
g = cc; 
b = aa; 
break; 
case 1: 
r = bb; 
g = v; 
b = cc; 
break; 
case 2: 
r = aa; 
g = bb; 
b = v; 
break; 
case 3: 
r = aa; 
g = bb; 
b = v; 
break; 
case 4: 
r = cc; 
g = aa; 
b = v; 
break; 
case 5: 
r = v; 
g = aa; 
b = bb; 
break; 
}} 
printf("The RGB values are:\n"); 
printf("r = %f  g = %f  b = %f",r,g,b); 
} 
void main() 
{ 
float h,s,v; 
clrscr(); 
printf("ENTER THE HSV VALUES(values from 0 to 1)\n"); 
scanf("%f%f%f",&h,&s,&v); 
hsvtorgb(h,s,v); 
getch(); 
} 

#include<stdio.h> 
#include<conio.h> 

void main() 
{ 
FILE *fp,*fp1; 
char a,c; 
int i=1; 
clrscr(); 
fp = fopen("z:/graphics/read.txt","r"); 
fp1 = fopen("z:/graphics/write.txt","w"); 
a = fgetc(fp); 
while(!feof(fp)) 
{ 
c = fgetc(fp); 
if(c == a) 
{ 
a = c; 
i++; 
} 
else 
{ 
fprintf(fp1,"%d%c",i,a); 
a = c; 
i = 1; 
} 
} 
printf("SUCCESSFULLY COMPRESSED"); 
fclose(fp); 
fclose(fp1); 
getch(); 
} 

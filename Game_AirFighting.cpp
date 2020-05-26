#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int i,j;
	int x=23;
	int y=57;
	char input;
	while(1){
		system("cls");
		for(i=0;i<x;i++) printf("\n");
		for(j=0;j<y;j++) printf(" ");
		printf("  *\n");
		for(j=0;j<y;j++) printf(" ");
		printf("*****\n");
		for(j=0;j<y;j++) printf(" ");
		printf(" * * \n");
		if(kbhit()){
			input=getch();
			if(y>0) if(input=='a')y=y-2;
			if(y<115) if(input=='d')y=y+2;
			if(x>0) if(input=='w')x--;
			if(x<26) if(input=='s')x++;
		}
	}
	return 0;
} 

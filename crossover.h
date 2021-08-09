#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//#include"chromes.h"



chrome *cross(chrome p[]){
	//chrome temp1, temp2;
	srand (time(NULL));

	int divider1, divider2;
	int temp0, temp1;
	
	divider1=rand()%4;
	divider2=rand()%4;
	
	printf("Index numbers to swap are = %d %d\n\n",divider1,divider2);
	
	while(divider1==divider2){
		
		divider2=rand()%4;
		printf("Similar index detected.\nRandomizing...\nIndex numbers to swap are = %d %d\n\n",divider1,divider2);
		
	}
	//printf("Index numbers to swap are = %d %d\n\n",divider1,divider2);

	temp0=p[0].cArray[0][divider1];	
	temp1=p[0].cArray[1][divider1];		
	
	p[0].cArray[0][divider1]=p[1].cArray[0][divider1];
	p[0].cArray[1][divider1]=p[1].cArray[1][divider1];
			
	
		
	p[1].cArray[0][divider1]=temp0;
	p[1].cArray[1][divider1]=temp1;
	
	
	temp0=p[0].cArray[0][divider2];
	temp1=p[0].cArray[1][divider2];
	
	p[0].cArray[0][divider2]=p[1].cArray[0][divider2];
	p[0].cArray[1][divider2]=p[1].cArray[1][divider2];
	
	p[1].cArray[0][divider2]=temp0;
	p[1].cArray[1][divider2]=temp1;
	
	p[0].total_energy=calculate_energy(p[0].cArray);
	p[0].total_quantity=calculate_quantity(p[0].cArray);
	
	p[1].total_energy=calculate_energy(p[1].cArray);
	p[1].total_quantity=calculate_quantity(p[1].cArray);
	

	//print_chrome(p,2);
	return p;
}

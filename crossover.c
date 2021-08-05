#include<stdio.h>
#include<stdlib.h>



void cross(chrome p[]){
	//chrome temp1, temp2;
	
	int temp0, temp1;
	
	temp0=p[0].cArray[0][0];	
	temp1=p[0].cArray[1][0];		
	
	p[0].cArray[0][0]=p[1].cArray[0][0];
	p[0].cArray[1][0]=p[1].cArray[1][0];
			
	
		
	p[1].cArray[0][0]=temp0;
	p[1].cArray[1][0]=temp1;
	
	
	temp0=p[0].cArray[0][1];
	temp1=p[0].cArray[1][1];
	
	p[0].cArray[0][1]=p[1].cArray[0][1];
	p[0].cArray[1][1]=p[1].cArray[1][1];
	
	p[1].cArray[0][1]=temp0;
	p[1].cArray[1][1]=temp1;
	
	p[0].total_energy=calculate_energy(p[0].cArray);
	p[0].total_quantity=calculate_quantity(p[0].cArray);
	
	p[1].total_energy=calculate_energy(p[1].cArray);
	p[1].total_quantity=calculate_quantity(p[1].cArray);
	

	print_chrome(p,2);
}

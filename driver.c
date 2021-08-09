#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"chromes.h"
#include"roulette.h"
#include"crossover.h"

int main(){
	srand (time(NULL));
	int i=0,j,k=0,flag=0;

	chrome s2[10], s3[10],*child;
	create_chrome();
	//print_chrome(cz,10);
	
	while(k!=2)
    {	
    	
		
	        s2[i]=roul(cz);
	        //s3[i]=copyc(s2[i]);
	        if(i==0)
	        	s3[k++]=s2[i];
	        	
	        else{
		        for(j=i-1;j>=0;j--){
		            if(s2[i].total_energy==s2[j].total_energy || s2[i].total_quantity==s2[j].total_quantity)
		            {
		                flag=1;
		                
		               // s3[i]=copyc(s3[i]);
		
		            }   
		        }
		        if(flag==0){
		        	s3[k++]=s2[i];
				}
		    }
	    i++;
	}
	
    printf("\nk=%d\n\n",k);
   
    print_chrome(s3,k);
    
    child=cross(s3);
    //print_chrome(child,2);
    print_chrome(child,2);
	
}





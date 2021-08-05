#include<stdio.h>
#include<stdlib.h>
#include<time.h>



chrome roul(chrome s1[10]){

	//chrome s2[10];
	int sum_energy=0,sum_quantity=0,i,j=0,rand_energy,
		rand_quantity, pSum_energy=0,pSum_quantity=0;

	//print_chrome(s1,10);

	for(i=0;i<10;i++){
		sum_energy+=s1[i].total_energy;
		sum_quantity+=s1[i].total_quantity;
	}

	rand_energy = rand()%sum_quantity+1;
	rand_quantity = rand()%sum_quantity+1;
	printf("This is random %d \n",rand_energy);
	printf("This is random %d \n",rand_quantity);

	for(i=0;i<10;i++){
		pSum_energy+=s1[i].total_energy;
		pSum_quantity+=s1[i].total_quantity;

		if(pSum_energy>=rand_energy &&
			pSum_quantity>=rand_quantity ){
			//	print_chrome(s1,1);
			printf("Success\n");
				return s1[i];

				//print_chrome(s2[j++],1);
			}

		}
        return;
	}

chrome copyc(chrome a){
    chrome b;
    int i=0;
    for(i=0;i<4;i++){
        b.chromeArray[0][i]=a.chromeArray[0][i];

        b.chromeArray[1][i]=a.chromeArray[1][i];

    }


    b.total_energy=a.total_energy;
    b.total_quantity=a.total_quantity;
    
    return b;


}

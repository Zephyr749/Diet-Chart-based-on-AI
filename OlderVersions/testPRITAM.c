#include "chromes.h"

int chromelength=4;
chrome selected_cz[10];
int size= 10;
int main()
{
    create_chrome();
    print_chrome(size);

    selection();
}

void selection(){
	
	int i,j=0;
	for(i=0;i<size;i++){
	
    if(cz[i].total_kcal<=3000 && cz[i].total_kcal>=2500 && cz[i].total_quantity<=4000 && cz[i].total_quantity>=3000)
    {
        selected_cz[j++]=cz[i];
        
    }
}
roulette(selected_cz);
}
/*int roulette(cz[index].chromeArray)
{
    //randomly pick from those who are eligible from above requirement
}*/

void roulette(chrome parent_cz[size])
{
int i;
int j;
int k;
int max_fitness_1;
int max_fitness_2;


int random_1;
int random_2;

int running_total_1[size];
int running_total_2[size];

int current_total_1;
int current_total_2;

chrome child_cz[size];

current_total_1 = 0;
current_total_2 = 0;



	for (i=0; i<size; i++)
                 	{
                    current_total_1 =   parent_cz[i].total_kcal + current_total_1;
                    current_total_2 =   parent_cz[i].total_quantity + current_total_2;

                    running_total_1[i] = current_total_1;
                    running_total_2[i] = current_total_2;


                    printf("Running Total 1 %d",running_total_1[i]);
                    printf("Running Total 2 %d",running_total_2[i]);

                  }
                max_fitness_1 = current_total_1;
                max_fitness_2 = current_total_2;

                printf("Max Fitness 1 = %d",max_fitness_1);
                printf("Max Fitness 2 = %d",max_fitness_2);


   	for (i=0; i<size; i++)
      			{
                random_1 = My_rand_no(max_fitness_1);
                random_2 = My_rand_no(max_fitness_2);

            	printf("Random Number 1 = %d",random_1);
            	printf("Random Number 2 = %d",random_2);


             	  	for (j=0; j<size; j++)
                    {
                     if (random_1 > running_total_1[j] && random_2> running_total_2)
                         for (k=0; k < chromelength; k++)
                        {
                         parent_cz[i][k] = child_cz[j][k];
                         j = size + 1;
                         printf("Parent ['i'] %d= ",current_total_1[j]);
                         printf("Parent ['i'] %d= ",current_total_2[j]);

                        }
                    }
               }
}

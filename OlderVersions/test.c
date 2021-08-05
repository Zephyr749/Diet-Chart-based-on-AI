
#include<stdio.h>


typedef struct{
	int chromeArray[2][4];
	int total_kcal,total_quantity;
}chrome;
chrome cz[10]; //global variable


void addValue(int index,int prt,int w0, int crb,int w1, int fat,int w2, int gcs,int w3);
int calculate_kcal(int a[2][4]);
int calculate_quantity(int a[2][4]);
void print_chrome(chrome printCZ[], int size);
void create_chrome();



void addChrome(int index,int kcal[4],int gram[4]){
	
	int i,j;
	for(i=0;i<4;i++){
	
	cz[index].chromeArray[0][i] = kcal[i];
	cz[index].chromeArray[1][i] = gram[i];
}
	for(i=0;i<=1;i++){

		cz[index].total_kcal = calculate_kcal(cz[index].chromeArray);
		cz[index].total_quantity = calculate_quantity(cz[index].chromeArray);
	}
	

		

	
}

void create_chrome(){
	printf("The Chromosomes and their objective values are:\n\n");
	addValue(0,1800,730,1200,310,700,250,400,230);
	addValue(1,1370,550,1100,300,900,280,400,120);
	addValue(2,2000,420,1100,380,870,360,600,340);
	addValue(3,2300,420,1100,380,870,360,600,340);
	addValue(4,1500,600,1300,570,800,350,300,250);
	addValue(5,2000,800,1900,150,200,140,500,90);
	addValue(6,1000,920,1500,600,300,70,340,100);
	addValue(7,1500,700,2000,520,150,50,600,110);
	addValue(8,2200,990,1000,600,100,30,220,60);
	addValue(9,1200,1000,2020,620,150,100,200,50);
}


/*int main(){
	
	create_chrome();
	
	
	print_chrome(10);

	
}*/

void print_chrome(chrome printCZ[], int size){
	int index,j,k;
	for(index=0;index<size;index++){
	
	printf("Chromosome(%d)\tProtein\tCarbs\tFat\tGlucose\n",index);
	for(j = 0;j<2;j++){
		if(j == 0)
			printf("Energy(Kcal):\t");
		else if(j == 1)
			printf("Weight(gram):\t");
		for(k = 0;k<4;k++){
			
				
			
			printf("%d\t",printCZ[index].chromeArray[j][k]);
			
		}
		printf("\n");
	}
	printf("\nTotal Energy=\t%d Kcal\nTotal Weight=\t%d gram\n\n-----------------------------------------------\n\n",
	printCZ[index].total_kcal,printCZ[index].total_quantity);
		
}
}
int calculate_kcal(int a[2][4]){
	int i,tk = 0; //tk=Total Kcal
	
	for(i = 0;i<4;i++){
		tk += a[0][i];
		
		}
	
	return tk;
	}

int calculate_quantity(int a[2][4]){
	int i,tq=0; //tq=Total Quantity
	
	for(i=0;i<4;i++){
		
		tq+=a[1][i];
		}
	
	return tq;
	}
	
void addValue(int index,int prt,int w0, int crb,int w1, int fat,int w2, int gcs,int w3){ // w0,w1,w2,w3 = Weight 0, weight 1, Weight 2, Weight 3
	int kcal[4],gram[4];
	kcal[0] = prt;			//Adding calory into kcal 
	gram[0] = w0;				//Adding gram into gram
	kcal[1] = crb;			//in this specific format because it will be easy to input from the existing word file others created
	gram[1] = w1;				
	kcal[2] = fat;
	gram[2] = w2;
	kcal[3] = gcs;
	gram[3] = w3;
	
	addChrome(index,kcal,gram);
	
	
}

/*fitness_selection
crossover
mutation
selection_method*/


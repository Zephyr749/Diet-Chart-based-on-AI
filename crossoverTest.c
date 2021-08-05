#include<stdio.h>
//#include<chromes.h>
 int main()
 {
    //create_chrome();
    //print_chrome(10);
    int x=0,y=0;
    int c0[]={1800, 1200, 700, 400};
    int c1[]={1370, 1100, 900, 400};

    printf("Array1 values are = ");
    for(int i=0; i<4; i++)
    {
        printf("%d ",c0[i]);
    }
    printf("\nArray2 values are= ");
    for(int j=0; j<4; j++)
    {
        printf("%d ",c1[j]);
    }

    x=c0[0];    c0[0]=c1[0];    c1[0] = x;
    y=c0[1];    c0[1]=c1[1];    c1[1] = y;

    printf("\nAfter crossover the first chromosome is : ");
    for(int i=0;i<4;i++)
    {
        printf("%d ",c0[i]);
    }
    printf("\nAfter crossover the second chromosome is : ");
    for(int i=0; i<4; i++)
    {
        printf("\n%d" , c1[i]) ;
    }
  return 0;
}

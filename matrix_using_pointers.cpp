#include<stdio.h>
main()
{
	int i=0,j=0,element[3][3],*p;
	printf("Input elements in the matrix :\n");
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			printf("element-[%d",i);
			printf("][%d",j);
			printf("]");
			scanf("%d",&element[i][j]);
		}
	}
	printf("The matrix is:\n");
    for(p=&element[0][0];p<=&element[2][2];p++)
    {
    	printf("  %d",*p);
    	if(*p%3==0)
    	{
    		printf("\n");
		}
	}
	
}




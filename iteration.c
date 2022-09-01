    #include<stdio.h>
	#include<conio.h>
	void swap(int*, int*);
    void main()
	{
		int n1, n2;
        printf("Enter any two numbers:");
        scanf("%d%d",&n1,&n2);

    swap(&n1,&n2);
    printf("\n After swap: \n");
    printf("\n n1=%d and n2=%d",n1,n2);
    getch();
    }

    void swap(int*x, int*y)
    {
        int temp;
        temp=*x;
		*x=*y;
		*y=temp;
	}

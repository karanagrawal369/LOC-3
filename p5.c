#include <stdio.h>

int largest(int[],int);

int main()

{

    int a[100],a_size,N,i;

    printf("Enter size of array:" );

    scanf("%d",&a_size);

    printf("Enter the elements :\n");

    for(i=0;i<a_size;i++)

        scanf("%d",&a[i]);

    N=largest(a,a_size);

    printf("Largest number is: %d\n",N);

    return 0;

}

int largest(int a[],int a_size)

{

    int i,Large_num;

    Large_num=a[0];

    for(i=1;i<a_size;i++)

    {

        if(Large_num<a[i])

            Large_num=a[i];

    }

    return Large_num;

}


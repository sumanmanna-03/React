 #include<stdio.h>

int main(void)
{
    int c=0;
    int arr[3][4];
    int brr[4][3];
    printf("Enter the elements of Matrix\n");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 4; j ++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
   
    for(int i = 0; i < 4; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
           c = arr[i][j];
           arr[i][j] = brr[j][i];
           brr[j][i] = c;
        }
    }

    printf("The Transposed Matrix is \n");
    for(int i = 0; i < 4; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
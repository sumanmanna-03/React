// #include<stdio.h>
// void main(){
//   int r, c, x;
//   printf("enter row and column\n");
//   scanf("%d %d",&r,&c);
//   int arr[r][c];

//   //taking input
//   for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//       scanf("%d", &arr[i][j]);
//     }
//   }

//   printf("\n");

//   int brr[c][r];
//   // logic
//   for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//       x = arr[i][j];
//       arr[i][j] = brr[j][i];
//       brr[j][i] = x;
//     }
//   }

//   //Output
//   for(int i=0;i<c;i++){
//     for(int j=0;j<r;j++){
//       printf("%d  ",brr[i][j]);
//     }
//     printf("\n");
//   }
// }

#include<stdio.h>
int main(void)
{
    int c;
    int arr[3][3];
    int brr[3][3];
    printf("Enter the elements of Matrix\n");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
            scanf("%d", & arr[i][j]);
        }
    }
   
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
           c = arr[i][j];
           arr[i][j] = brr[j][i];
           brr[j][i] = c;
        }
        
   
    }

    printf("The Transposed Matrix is \n");
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3; j ++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
   return 0;
}
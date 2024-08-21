// ------------- STORING ARRAY IN A SEPARATE ARRAY ----------------


#include<stdio.h>
int main()
{
  int r,c;
  printf("enter the number of rows and column:\n");
  scanf("%d %d",&r,&c);
  printf("Enter all the element:\n");
  int arr[r][c];

    // ----Taking input----
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");

  // ----printing output----
  // for(int i=0;i<r;i++){
  //   for(int j=0;j<c;j++){
  //     printf("%d  ",arr[i][j]);
  //   }
  //   printf("\n");
  // }

  printf("After transposing matrix is:\n");

  int brr[c][r]; // creating another array with interchanging r and c
  
  //input in brr
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      brr[i][j]=arr[j][i];
    }
  }

  // printing brr
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      printf("%d  ",brr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
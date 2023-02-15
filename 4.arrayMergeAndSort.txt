#include <stdio.h>

int main() {
    int i,j,n1,n2,n3,A[10],B[10],C[10];
    printf("Enter number of elements in array A: ");
    scanf("%d",&n1);
    printf("\nEnter elements in sorted order : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    
    printf("Enter number of elements in array B: ");
    scanf("%d",&n2);
    printf("\nEnter elements in sorted order : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&B[i]);
    }
    
    n3 = n1 + n2;
    for(int i = 0; i < n1; i++)
       C[i] = A[i];
    for(int i = 0; i < n2; i++)     
        C[i + n1] = B[i];
        
    //sorting
     for(int i = 0; i < n3; i++){
        int temp;
        for(int j = i + 1; j < n3; j++) {
            if(C[i] > C[j]) {
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }   
    printf("\nSorted array:");
    for(int i = 0; i < n3 ; i++)       //Print the sorted Array 
        printf(" %d ",C[i]);
    return 0;
}

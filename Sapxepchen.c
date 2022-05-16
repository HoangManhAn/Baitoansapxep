#include <stdio.h>

void InsertionSort(int arr[], int n){
    int i,k;
    for (i = 1; i < n; i++){
        int x = arr[i];
        int j = i;
    while (j > 0 && arr[j - 1] > x){
        arr[j] = arr[j - 1];
        j--;
    }
    arr[j] = x;
    for ( k = 0; k < n; k++){
             printf("%d ", arr[k]);
        }
    printf("\n");
    }
}

int main(){
    int i,n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    InsertionSort( arr , n);
return 0;
}
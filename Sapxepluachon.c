#include <stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void selectionsort(int arr[],int n){
	int min_idx, i,j,k;
	for(i=0; i<n-1; i++){
		min_idx=i;
		for(j=i+1; j<n; j++){
			if(arr[j]<arr[min_idx])
				min_idx=j;
		}
		swap(&arr[min_idx],&arr[i]);

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
    selectionsort( arr , n);
    
return 0;
}
#include <stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int arr[],int n){
    int i,j,k;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
        for ( k = 0; k < n; k++)
        {
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
    
    bubblesort( arr , n);
return 0;
}
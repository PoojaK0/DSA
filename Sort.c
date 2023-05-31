//Bubble,Selction,Insertion
#include <stdio.h>
#define m 5
int main()
{
    void Bsort(int[]);
    void Ssort(int[]);
    void Isort(int[]);

    int arr[m];
    int i;
    for(i=0; i<m; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array entered: ");
    for(i=0; i<m; i++)
    printf("%d ",arr[i]);
    
    Isort(arr);
    Bsort(arr);
    Ssort(arr);


    return 0;
}
void Bsort(int arr[]){
    int i=0,j,temp;
    
    for(i=0; i<m; i++){
        for(j=0; j<m-i-1; j++){
            
            if(arr[j]>arr[j+1]){
                
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray sorted: ");

    for(i=0; i<m; i++)
    printf("%d ",arr[i]);
}

void Ssort(int arr[]){
    int i=0,j,min;
    
    for(i=0; i<m; i++){
        min=i;
        for(j=i+1; j<m; j++){
            if(arr[min]>arr[j])
            min=j;
        }
         int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
    }
    printf("\nArray sorted: ");

    for(i=0; i<m; i++)
    printf("%d ",arr[i]);
    
}

void Isort(int arr[]){
    int i,j,temp;
    
    for(i=0; i<m-1; i++){
        for(j=i+1; j>0; j--){
            if(arr[j]<arr[j-1])
					{
					    temp=arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]=temp;
					}
				else
				break;
			
        }
         
    }
    printf("\nArray sorted: ");

    for(i=0; i<m; i++)
    printf("%d ",arr[i]);
  
}



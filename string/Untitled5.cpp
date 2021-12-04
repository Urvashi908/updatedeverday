
//"	Delete all duplicate elements from an array.	
#include<stdio.h>
void duplicat()
{  
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};   
      
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
    int i ,j;
      
    printf("Duplicate elements in given array: \n");  
    //Searches for duplicate element  
    for(i = 0; i < length; i++) {  
        for(j = i + 1; j < length; j++) {  
            if(arr[i] == arr[j])  
                printf("%d\n", arr[j]);  
        }  
    }    
}  
int main()  
{
	 duplicat();
}
}

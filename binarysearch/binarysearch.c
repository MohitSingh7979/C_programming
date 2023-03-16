#include <stdio.h>
#include <stdlib.h>

int bsh(int *arr, int st, int sp, int elm){

        int mdl = (st + sp) / 2;

        if (elm == arr[mdl]){
            return mdl;
            
        }else if(mdl == 0){
            return -1;

        }else if(elm < arr[mdl]){
            return bsh(arr, st, mdl, elm);

        }else {
            return bsh(arr, mdl+1, sp, elm);

        }
}
int main(){
    
    int ind, i, j, elm, eoa, num;

    printf("enter number of items to be inserted in array\n");
    scanf("%d", &eoa);

    int *arr = (int *)malloc(4 * eoa);

    printf("Enter numbers in increasing order\n");
    for (i = 0; i < eoa; i++){
        printf("enter items:");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < eoa; i++){
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("Enter number, its index will be return\n");
    scanf("%d", &num);
    
    // int found_at = -1;
    // int st = 0, sp = eoa;

    // while((sp - st) > 0){
    //     int mdl = (st + sp) / 2;
        
    //     if(num < arr[mdl]){
    //         sp = mdl;
    //     }else if(num > arr[mdl]){
    //         st = mdl + 1;
    //     }else {
    //         found_at = mdl;
    //         break;
    //     }
    // }

    int found_at = bsh(arr, 0, eoa, num);

    printf("found at %d\n", found_at);

    free(arr);
}
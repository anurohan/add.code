#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the number of row...:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>=i){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }
}//n=6
//000000
// 11111
//  2222
//   333
//    44
//     5
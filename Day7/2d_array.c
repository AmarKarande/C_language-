#include <stdio.h>
int main(){
    int rs=3;
    int cs=3;
    int mat [3][3];
    printf("enter the matrix value \n");
    for (int i=0;i<rs;i++){
        for(int j=0;j<cs;j++){
            printf("mat[%d][%d] ",i,j);
            scanf("%d",&mat [i][j]);
        }
    };
    for (int i=0;i<rs;i++){
        for (int j=0;j<cs;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    };
    return 0;
}
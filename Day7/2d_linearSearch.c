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
     printf("enter val to search:");
    int key;
    int flag=0;
    scanf("%d",&key);
    for( int i=0;i<rs;i++){
        for (int j=0;j<cs;j++){
              if(key==mat[i][j]) {
            printf("Element %d is present at index[%d][%d]\n",key,i,j);
            flag=1;
        }
        }
    }
    if(flag==0) {
        printf("Element is not present\n");
    }
    return 0;
}
   
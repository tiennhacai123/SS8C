#include<stdio.h>
int main(){
	int row,col,sum;
	printf("Nhap so dong va so cot: ");
	scanf("%d %d",&row,&col);
	int num[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("num[%d][%d]= ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	printf("So trong mang la: \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
	        if(num[i][j] %2==0){
	       	    sum+=num[i][j];
		        printf("Cac so chan trong mang la: %d\n",num[i][j]);
	        }
	    }
	}
	printf("Tong cac so chan trong mang la: %d",sum);
}
			
			
#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap mot so nguyen ");
	scanf("%d",&n);
	int arrayNum[n][n];
	for(int a=0;a<n;a++){
		for (int b=0;b<n;b++){
			printf("moi ban nhap gia tri cho phan tu arrayNum[%d][%d] la ",a,b);
			scanf("%d",&arrayNum[a][b]);
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf(" %d ",arrayNum[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

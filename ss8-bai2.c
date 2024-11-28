#include <stdio.h>

int main(){
	int flag=0;
	int n;
	int arrayNum[5]={1,2,3,4,5};
	printf("moi ban nhap mot phan tu bat ki ");
	scanf("%d",&n);
	for (int i=0;i<5;i++){
		if(n==arrayNum[i]){
			printf("vi tri phan tu trong mang la %d",i);
			flag=1;
		}
	}
	if (flag==0){
		printf ("phan tu khong ton tai trong mang ");
	}
	
	
	return 0;
}

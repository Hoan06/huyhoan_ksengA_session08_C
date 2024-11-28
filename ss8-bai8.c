#include <stdio.h>

int main(){
	int arrayNum[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum;
	for(int i=0;i<3;i++){
			printf("phan tu duong cheo phu la : %d\n",arrayNum[i][2-i]);
			
			sum=sum+arrayNum[i][2-i];
	} 
	printf("tong duong cheo phu la : %d\n",sum);
    return 0;
}

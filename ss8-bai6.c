#include <stdio.h>
 int main(){
 	int num[4][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15}},sum;
 	printf("cac phan tu cua duong cheo : \n");
 	for(int i=0;i<4;i++){
 		printf("%d\n",num[i][i]);
 		sum=sum+num[i][i];
	 }
	 printf("duong cheo chinh la  : %d",sum);
	 return 0;
}

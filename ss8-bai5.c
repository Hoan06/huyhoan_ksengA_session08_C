#include <stdio.h>
 int main(){
 	int number[4][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15}},sum;
 	for(int i=0; i<4; i++){
 			sum=sum+number[0][i];
	 }
	 for(int i=1; i<4; i++){
 			sum=sum+number[i][0];
	 }
	  for(int i=1; i<4; i++){
 			sum=sum+number[3][i];
	 }
	 for(int i=1; i<4; i++){
 			sum=sum+number[i][3];
	 }
	 printf("tong %d",sum-number[3][3]);
 	 return 0;
 }

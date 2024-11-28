#include <stdio.h>
 int main(){
 	int number[2][2]={{1,6},{3,7}},max;
 	max=number[0][0];
 	
 	for(int i=0; i<2; i++){
 		for(int j=0; j<2; j++){
 			if(number[i][j]>max){
 			max=number[i][j];
		 }
		 
	 }
	 printf("so lon nhat la : %d\n ", max);
 	 return 0;
    }
    }

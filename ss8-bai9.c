#include <stdio.h>

int main(){
	int maxFlag,maxItem;
	int array[]={1,2,3,4,2,5,2};
	for (int i=0;i<7;i++){
		int flag=0;
		for (int j=0;j<7;j++){
			if(array[i]==array[j]){
				flag++;
			}
		}
		if (flag>maxFlag){
			maxFlag=flag;
			maxItem=array[i];
	    }
	}
	printf ("phan tu xuat hien nhieu nhat la : %d",maxItem);
	
	
	
	return 0;
}

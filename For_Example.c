#include <stdio.h>

int main(void){

	int i, to, from, sum = 0;
	
	printf("입력 1 : ");
	scanf("%d", &from);
	
	printf("입력 2 : ");
	scanf("%d", &to);
 

    for(i = from; i <= to ; i++){ 
        sum = sum + i;
    }
    printf("합 = %d", sum);
    return 0; 
}

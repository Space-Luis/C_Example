#include <stdio.h>

int main(void){

	int i, to, from, sum = 0;
	
	printf("�Է� 1 : ");
	scanf("%d", &from);
	
	printf("�Է� 2 : ");
	scanf("%d", &to);
 

    for(i = from; i <= to ; i++){ 
        sum = sum + i;
    }
    printf("�� = %d", sum);
    return 0; 
}

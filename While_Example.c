#include <stdio.h>

int main(void){

    int i = 1; //정수 값 i를 설정하고 해당 값에 1이라는 숫자를 지정

    while(i <= 5){ //조건 해석 : i가 5이하이면 계속 실행
        printf("i = %d\n", i); // i의 값을 가지고 옵니다.
        i++; //실행할 때 마다 i의 값을 1씩 더해줍니다.
    }
    return 0; //0이라는 값을 반환 합니다
}
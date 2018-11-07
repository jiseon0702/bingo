#include <stdio.h>
#include <stdlib.h>
#include <print_table.h>
int N;
int M;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, 0char *argv[]) {
	initiate_bingo(N); // 빙고 테이블을 초기에 만듦
	
	print_bingo(); // 빙고 테이블 현재 상황을 화면에 출력
	get_number_byMe() //내가 빙고 번호 입력 선택
	get_number_byCom() //컴퓨터가 임의로 빙고 번호 선택
	process_bingo() // 선택된 숫자를 입력받아서 빙고 테이블 칸을 채움
	count_bingo() // 빙고 테이블이 채운 가로/세로/대각선 줄 수를 계산해서 반환
	 
	
	return 0;
}

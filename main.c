#include <stdio.h>
#include <stdlib.h>
#include <print_table.h>
int N;
int M;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, 0char *argv[]) {
	initiate_bingo(N); // ���� ���̺��� �ʱ⿡ ����
	
	print_bingo(); // ���� ���̺� ���� ��Ȳ�� ȭ�鿡 ���
	get_number_byMe() //���� ���� ��ȣ �Է� ����
	get_number_byCom() //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ����
	process_bingo() // ���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä��
	count_bingo() // ���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ
	 
	
	return 0;
}

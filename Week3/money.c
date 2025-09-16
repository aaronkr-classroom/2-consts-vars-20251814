// money.c
#include <stdio.h>

int main(void) {
	int won;
	won = 10000000;
	printf("제 은행에서 %d\\ 있습니다.\n", won);
	
	// 쉼표 있는 것
	const char*easy_won = "10,000,000";
	printf("제 은행에서 %s\\ 있습니다.\n", easy_won);

	printf("+500,000\\ 수금~");
	easy_won = "10,500,000"; // ???
	printf("수금해서 지금 %s\\ 있습니다.\n", easy_won);

	// Bitcoin
	float bc = 10.123456789;
	printf("Bitcoin 지갑: %.f5BC\n", bc); // BC

	bc = bc + 0.34567;
	printf("현재 Bitcoin 지갑: %fBC\n", bc); // BC
	// 10.46912

	return 0;
}
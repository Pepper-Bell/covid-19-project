#include <stdio.h>
#include "symptom.h"
#include<string.h>

void find(void) {
	int num0; int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7; int *sid[7] = { &a, &b, &c, &d, &e, &f, &g };  //포인터배열_if문에서 입력 숫자와 비교위한 정수
	printf("\n현재 겪고 있는 증상을 선택하시오\n->");
	printf("\n1.기침이 잦습니다.\n2.피로감을 쉽게 느낍니다.\n3.냄새를 못 맡거나 미각의 상실이 있습니다.\n4.두통이 있습니다.\n5.설사가 있습니다.\n6.호흡곤란을 겪습니다.\n7.언어의 상실이 있습니다.\n->");
	scanf_s("%d", &num0);
	if (num0==*sid[0]) {
		printf("\n기침은 코로나-19의 가장 흔한 증상입니다\n");
	}
	else if (num0 ==*sid[1]) {
		printf("\n피로는 코로나-19의 가장 흔한 증상입니다\n");
	}
	else if (num0 == *sid[2]) {
		printf("\n후각과 미각의 상실은 코로나-19의 가장 흔한 증상입니다\n");
	}
	else if (num0 == *sid[3]) {
		printf("\n두통은 코로나-19의 덜 흔한 증상입니다\n");
	}
	else if (num0 == *sid[4]) {
		printf("\n설사는 코로나-19의 덜 흔한 증상입니다\n");
	}
	else if (num0 == *sid[5]) {
		printf("\n호흡곤란은 코로나-19의 심각한 증상입니다\n");
	}
	else if (num0 == *sid[6]) {
		printf("\n언어 상실과 어지러움은 코로나-19의 심각한 증상입니다\n");
	}
	else {
		printf("\n지원하지 않는 번호입니다.\n");
	}
}

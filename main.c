/*
  컴퓨터프로그래밍 평가과제
  학과 : 컴퓨터공학부
  학번 : 202202989
  이름 : 임초현
  과제 주제 : 국가별 코로나 19 상황과 코로나 19 증상 판단
*/

#include <stdio.h>
#include "symptom.h"
#include "kosis.h"
#define _CRT_SECURE_NO_WARNINGS

struct userinfo { //구조체_사용자 선택 번호 입력 받기
    int num1;
    int num2;
};

FILE* fp;

int main() {
    int con = 1; int* p = &con; //포인터_while문 반복 여부 변수 초기화
    int num1 = 0; int num2 = 0;
    struct userinfo ui = {num1, num2 }; //구조체 지정
    fopen_s(&fp, "contact.txt","a");  //파일 입출력_프로그램 실행 시 텍스트 파일에 문자열 입력
    fputs("프로그램 실행\n", fp);
    fclose(fp);

    while(con) {
        printf("\n원하시는 항목의 번호를 입력해주세요.\n1. 국가별 코로나19 현황\n2. COVID-19의 증상 진단\n3. 프로그램 종료\n->");
        scanf_s("%d", &ui.num1);
        if (ui.num1==1) {
            printf("\n<대륙 선택>\n\n1. 아메리카\n2. 아시아\n3. 아프리카\n4. 오세아니아\n 5. 유럽\n6. 중동\n->");
            scanf_s("%d", &ui.num2);
            nation(ui.num2);  //사용자 지정함수 nation
        }
        else if (ui.num1 == 2) {
            find(); //사용자 지정함수 find
        }
        else if (ui.num1 == 3) {
            printf("\n프로그램을 종료합니다\n");
            fopen_s(&fp, "contact.txt", "a");
            fputs("프로그램 종료\n", fp);
            fclose(fp);
            *p = 0;
        }
        else {
            printf("\n 지원되지 않는 번호입니다.\n 번호를 다시 입력해주세요\n");
        }
    }
    return 0;
}

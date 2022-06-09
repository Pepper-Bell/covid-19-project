/*
  컴퓨터프로그래밍 평가과제
  학과 : 컴퓨터공학부
  학번 : 202202989
  이름 : 임초현
  과제 주제 : 국가별 코로나 19 상황과 코로나 19 증상
*/

#include <stdio.h>
#include "cure.h"
#include <string.h>

struct userinfo{
	char name[100];
	char address[100];
  int ch;
};

int main(void){
  struct userinfo ui;
  printf("당신의 이름을 알려주세요\n->");
  scanf("%s", &ui.name);
  printf("안녕하세요 %s님!!!\n원하시는 항목의 번호를 선택해주세요\n1. 국가별 코로나 19 상황\n2. 코로나 19 증상\n->");
  scanf("%d", &ui.ch);
  if(ui.ch==1){
  }
  else if(ui.ch==2){
    find();}
  return 0;
  
}

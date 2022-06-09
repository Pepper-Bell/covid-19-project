#include<stdio.h>
#include "cure.h"
#include<string.h>

void find(){
    char *sym; char *result;
	printf("현재 겪고있는 증상을 서술해주세요\n->");
	scanf("%s", sym);
	char *search1 = "기침"; char *search2 = "피로"; char *search3 = "냄새"; char *search4 = "두통"; char *search5 = "설사"; char *search6 = "호흡"; char *search7 = "언어"; char *search8 = "혼란";
	if(strstr(sym, search1) != NULL){
		printf("기침은 코로나 19의 가장 흔한 증상입니다\n");
	}
    else if(strstr(sym, search2) != NULL){
        printf("피로는 코로나 19의 가장 흔한 증상입니다\n");
    }
    else if(strstr(sym, search3) != NULL){
		printf("맛이나 냄새의 상실은 코로나 19의 가장 흔한 증상입니다\n");
	}
    else if(strstr(sym, search4) != NULL){
		printf("두통은 코로나 19의 덜 흔한 증상입니다\n병원에 방문하는 것을 추천드립니다\n");
	}
    else if(strstr(sym, search5) != NULL){
		printf("설사는 코로나 19의 덜 흔한 증상입니다\n병원에 방문하는 것을 추천드립니다\n");
	}
    else if(strstr(sym, search6) != NULL){
		printf("호흡 곤란은 코로나 19의 심각한 증상입니다\n빠른시일 내에 병원에 방문하는 것을 추천드립니다\n");
	}
    else if(strstr(sym, search7)||strstr(sym, search8) != NULL){
		printf("언어 상실 또는 이동성 상실 또는 혼란은 코로나 19의 심각한 증상입니다\n빠른시일 내에 병원에 방문하는 것을 추천드립니다\n");
	}
}

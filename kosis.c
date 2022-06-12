#include <stdio.h>
#include "kosis.h"

int n[18][2] = {    //배열_각 국의 코로나 확진자 수, 사망자 수
    {3873060, 41105},   //캐나다
    {83551386, 998070}, //미국
    {5782405, 324966},  //멕시코
    {18168708, 24279},  //한국
    {224398, 5236}, //중국
    {8945784, 30752},  //일본
    {14371, 113},   //중앙아프리카공화국
    {24128, 385},   //콩고
    {161795, 1445}, //가나
    {7373942, 8662},    //호주
    {1190406, 1179},    //뉴질랜드
    {21237, 149},   //솔로몬 제도
    {28733287, 145123}, //프랑스
    {26496611, 139386}, //독일
    {3470640, 29913},   //그리스
    {4147985, 10864},   //이스라엘
    {513975, 24719},    //이집트
    {771302, 9156}  //사우디아라비아
};

void nation(int a) {    //nation함수 지정
    int num;
    if (a == 1) {
        printf("\n<나라 선택>\n\n1. 캐나다\n2. 미국\n3. 멕시코\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[0][FNUM], n[0][SNUM]);
        }
        else if (num == 2) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[1][FNUM], n[1][SNUM]);
        }
        else if (num == 3) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[2][FNUM], n[2][SNUM]);
        }
        else {
            printf("\n잘못된 번호 입니다.\n");
        }
    }
    else if (a == 2) {
        printf("\n<나라 선택>\n\n1. 한국\n2. 중국\n3. 일본\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[3][FNUM], n[3][SNUM]);
        }
        else if (num == 2) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[4][FNUM], n[4][SNUM]);
        }
        else if (num == 3) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[5][FNUM], n[5][SNUM]);
        }
        else {
            printf("\n잘못된 번호 입니다.\n");
        }
    }
    else if (a == 3) {
        printf("\n<나라 선택>\n\n1. 중앙아프리카공화국\n2. 콩고\n3. 가나\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[6][FNUM], n[6][SNUM]);
        }
        else if (num == 2) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[7][FNUM], n[7][SNUM]);
        }
        else if (num == 3) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[8][FNUM], n[8][SNUM]);
        }
        else {
            printf("\n잘못된 번호 입니다.\n");
        }
    }
    else if (a == 4) {
        printf("\n<나라 선택>\n\n1. 호주\n2. 뉴질랜드\n3. 솔로몬 제도\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[9][FNUM], n[9][SNUM]);
        }
        else if (num == 2) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[10][FNUM], n[10][SNUM]);
        }
        else if (num == 3) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[11][FNUM], n[11][SNUM]);
        }
        else {
            printf("\n잘못된 번호 입니다.\n");
        }
    }
    else if (a == 5) {
        printf("\n<나라 선택>\n\n1. 프랑스\n2. 독일\n3. 그리스\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[12][FNUM], n[12][SNUM]);
        }
        else if (num == 2) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[13][FNUM], n[13][SNUM]);
        }
        else if (num == 3) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[14][FNUM], n[14][SNUM]);
        }
        else {
            printf("\n잘못된 번호 입니다.\n");
        }
    }
    else if (a == 6) {
        printf("\n<나라 선택>\n\n1. 이스라엘\n2. 이집트\n3. 사우디아라비아\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[15][FNUM], n[15][SNUM]);
        }
        else if (num == 2) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[16][FNUM], n[16][SNUM]);
        }
        else if (num == 3) {
            printf("\n확진자 수 -> %d 사망자 수 -> %d\n", n[17][FNUM], n[17][SNUM]);
        }
        else {
            printf("\n잘못된 번호 입니다.\n");
        }
    }
    else {
        printf("\n잘못된 번호 입니다.\n");
    }
}

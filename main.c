/*
  ��ǻ�����α׷��� �򰡰���
  �а� : ��ǻ�Ͱ��к�
  �й� : 202202989
  �̸� : ������
  ���� ���� : ������ �ڷγ� 19 ��Ȳ�� �ڷγ� 19 ���� �Ǵ�
*/

#include <stdio.h>
#include "symptom.h"
#include "kosis.h"
#define _CRT_SECURE_NO_WARNINGS

struct userinfo {
    int num1;
    int num2;
};

FILE* fp;

int main() {
    int con = 1; int* p = &con;
    int num1 = NULL; int num2 = NULL;
    struct userinfo ui = {num1, num2 };
    fopen_s(&fp, "contact.txt","a");
    fputs("���α׷� ����\n", fp);
    fclose(fp);

    while(con) {
        printf("\n���Ͻô� �׸��� ��ȣ�� �Է����ּ���.\n1. ������ �ڷγ�19 ��Ȳ\n2. COVID-19�� ���� ����\n3. ���α׷� ����\n->");
        scanf_s("%d", &ui.num1);
        if (ui.num1==1) {
            printf("\n<��� ����>\n\n1. �Ƹ޸�ī\n2. �ƽþ�\n3. ������ī\n4. �����ƴϾ�\n 5. ����\n6. �ߵ�\n->");
            scanf_s("%d", &ui.num2);
            nation(ui.num2);
        }
        else if (ui.num1 == 2) {
            find();
        }
        else if (ui.num1 == 3) {
            printf("\n���α׷��� �����մϴ�\n");
            fopen_s(&fp, "contact.txt", "a");
            fputs("���α׷� ����\n", fp);
            fclose(fp);
            *p = 0;
        }
        else {
            printf("\n �������� �ʴ� ��ȣ�Դϴ�.\n ��ȣ�� �ٽ� �Է����ּ���\n");
        }
    }
    return 0;
}
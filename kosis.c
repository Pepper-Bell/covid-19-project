#include <stdio.h>
#include "kosis.h"

int n[18][2] = {
    {3873060, 41105},   //ĳ����
    {83551386, 998070}, //�̱�
    {5782405, 324966},  //�߽���
    {18168708, 24279},  //�ѱ�
    {224398, 5236}, //�߱�
    {8945784, 30752},  //�Ϻ�
    {14371, 113},   //�߾Ӿ�����ī��ȭ��
    {24128, 385},   //���
    {161795, 1445}, //����
    {7373942, 8662},    //ȣ��
    {1190406, 1179},    //��������
    {21237, 149},   //�ַθ� ����
    {28733287, 145123}, //������
    {26496611, 139386}, //����
    {3470640, 29913},   //�׸���
    {4147985, 10864},   //�̽���
    {513975, 24719},    //����Ʈ
    {771302, 9156}  //����ƶ���
};

void nation(int a) {
    int num;
    if (a == 1) {
        printf("\n<���� ����>\n\n1. ĳ����\n2. �̱�\n3. �߽���\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[0][FNUM], n[0][SNUM]);
        }
        else if (num == 2) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[1][FNUM], n[1][SNUM]);
        }
        else if (num == 3) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[2][FNUM], n[2][SNUM]);
        }
        else {
            printf("\n�߸��� ��ȣ �Դϴ�.\n");
        }
    }
    else if (a == 2) {
        printf("\n<���� ����>\n\n1. �ѱ�\n2. �߱�\n3. �Ϻ�\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[3][FNUM], n[3][SNUM]);
        }
        else if (num == 2) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[4][FNUM], n[4][SNUM]);
        }
        else if (num == 3) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[5][FNUM], n[5][SNUM]);
        }
        else {
            printf("\n�߸��� ��ȣ �Դϴ�.\n");
        }
    }
    else if (a == 3) {
        printf("\n<���� ����>\n\n1. �߾Ӿ�����ī��ȭ��\n2. ���\n3. ����\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[6][FNUM], n[6][SNUM]);
        }
        else if (num == 2) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[7][FNUM], n[7][SNUM]);
        }
        else if (num == 3) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[8][FNUM], n[8][SNUM]);
        }
        else {
            printf("\n�߸��� ��ȣ �Դϴ�.\n");
        }
    }
    else if (a == 4) {
        printf("\n<���� ����>\n\n1. ȣ��\n2. ��������\n3. �ַθ� ����\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[9][FNUM], n[9][SNUM]);
        }
        else if (num == 2) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[10][FNUM], n[10][SNUM]);
        }
        else if (num == 3) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[11][FNUM], n[11][SNUM]);
        }
        else {
            printf("\n�߸��� ��ȣ �Դϴ�.\n");
        }
    }
    else if (a == 5) {
        printf("\n<���� ����>\n\n1. ������\n2. ����\n3. �׸���\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[12][FNUM], n[12][SNUM]);
        }
        else if (num == 2) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[13][FNUM], n[13][SNUM]);
        }
        else if (num == 3) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[14][FNUM], n[14][SNUM]);
        }
        else {
            printf("\n�߸��� ��ȣ �Դϴ�.\n");
        }
    }
    else if (a == 6) {
        printf("\n<���� ����>\n\n1. �̽���\n2. ����Ʈ\n3. ����ƶ���\n->");
        scanf_s("%d", &num);
        if (num == 1) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[15][FNUM], n[15][SNUM]);
        }
        else if (num == 2) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[16][FNUM], n[16][SNUM]);
        }
        else if (num == 3) {
            printf("\nȮ���� �� -> %d ����� �� -> %d\n", n[17][FNUM], n[17][SNUM]);
        }
        else {
            printf("\n�߸��� ��ȣ �Դϴ�.\n");
        }
    }
    else {
        printf("\n�߸��� ��ȣ �Դϴ�.\n");
    }
}
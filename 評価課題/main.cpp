#include<stdio.h> 
#include<stdlib.h> 

typedef struct cell 
{
    int val;
    struct cell* next;
} CELL;

// �v���g�^�C�v�錾
void addList(CELL* list, int val)
{
    CELL* num;
    num = (CELL*)malloc(sizeof(CELL));
    num->val = val;
    num->next = NULL;

    while (list->next != nullptr)
    {
        list = list->next;
    }
    list->next = num;
}
void printList(CELL* list)
{
    printf("[");
    while (list->next != nullptr)
    {
        list = list->next;
        printf("%d", list->val);
        printf(",");
    }
    printf("]\n");
}

int main()
{
    int data;
    CELL first_cell;
    first_cell.next = nullptr;

    printf("�v���O�����̎��s\n");

    while (true)
    {
        printf("�D���Ȑ�������͂��Ă��������B\n");
        printf("���͂���l");
        scanf_s("%d", &data);
        printf("���͂����l");
        addList(&first_cell, data);
        printList(&first_cell);
    }
    return 0;
}
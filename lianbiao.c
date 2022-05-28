#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Create_Stu_Doc.h"
#include "InsertDoc.h"
#include "DeleteDoc.h"
#include "Print_Stu_Doc.h"
struct stud_node* Create_Stu_Doc();
struct stud_node* InsertDoc(struct stud_node* head, struct stud_node* stud);
struct stud_node* DeleteDoc(struct stud_node* head, int num);
void Print_Stu_Doc(struct stud_node* head);
struct stud_node {
	int num;
	char name[20];
	int score;
	struct stud_node* next;
};
int main(void)
{
	struct stud_node* head, * p;
	int choice, num, score;
	char name[20];
	int size = sizeof(struct stud_node);

	do {
		printf("1: Create 2: Insert 3 : Delete 4 : Print 0: Exit \n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			head = Create_Stu_Doc();
			break;
		case 2:
			printf("Input num,name and score:\n");
			scanf("%d%s%d", &num, name, &score);
			p = (struct stud_node*)malloc(size);
			p->num = num;
			strcpy(p->name, name);
			p->score = score;
			head = InsertDoc(head, p);
			break;
		case 3:
			printf("Input num:\n");
			scanf("%d", &num);
			head = DeleteDoc(head, num);
			break;
		case 4:
			Print_Stu_Doc(head);
			break;
		case 0:
			break;
		}
	} while (choice != 0);

	return 0;
}
struct stud_node* Create_Stu_Doc()
{
	struct stud_node* head, * p;
	int num, score;
	char name[20];
	int size = sizeof(struct stud_node*);

	head = NULL;
	printf("Input num,name and score:\n");
	scanf("%d%s%d", &num, name, &score);
	while (num != 0) {
		p = (struct stud_node*)malloc(size);
		p->num = num;
		strcpy(p->name, name);
		p->score = score;
		head = InsertDoc(head, p);
		scanf("%d%s%d", &num, name, &score);
	}
	return head;
}
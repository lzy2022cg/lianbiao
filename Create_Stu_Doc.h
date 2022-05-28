List Create_Stu_Doc()
{
	List head, p;
	int num, score;
	char name[20];
	int size = sizeof(struct stud_node);

	head = NULL;
	printf("Input num,name and score: ");
	scanf("%d%s%d", &num, name, &score);
	while (num != 0) {
		p = (List)malloc(size);
		p->num = num;
		strcpy(p->name, name);
		p->score = score;
		head = InsertDoc(head, p);
		printf("Input num,name and score: ");
		scanf("%d%s%d", &num, name, &score);
	}
	return head;
}

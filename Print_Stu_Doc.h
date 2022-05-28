void Print_Stu_Doc(struct stud_node* head)
{
	struct stud_node* ptr;
	if (head == NULL) {
		printf(" \nNo Records \n");
		return;
	}
	printf(" \nThe Students'Records Are:\n");
	printf("Num \t Name \t Score \n");
	for (ptr = head; ptr != NULL; ptr = ptr->next)
		printf("%d \t%s \t%d\n", ptr->num, ptr->name, ptr->score);
}
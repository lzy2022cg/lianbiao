void Print_Stu_Doc(List head)
{
	List ptr;
	if (head == NULL) {
		printf("\nNo Records \n");
		return;
	}
	printf("\nThe student's Records Are: \n");
	printf("Num\t Name \t Score\n");
	for (ptr = head; ptr->next != NULL; ptr = ptr->next) {
		printf("%d \t%s \t%d\n", ptr->num, ptr->name, ptr->score);
	}
}

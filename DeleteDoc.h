struct stud_node* DeleteDoc(struct stud_node* head, int num)
{
	struct stud_node* ptr1, * ptr2;

	if (head == NULL)
		return NULL;          /*判断是否为空链表*/
	else if (head->num == num) {    /*判断要删除的是否为表头*/
		ptr2 = head;
		head = head->next;
		free(ptr2);
		return head;
	}
	else {
		ptr1 = head;
		ptr2 = head->next;
		while (ptr2 != NULL) {
			if (ptr2->num == num) {
				ptr1->next = ptr2->next;
				free(ptr2);
			}
			else
				ptr1 = ptr2;
			ptr2 = ptr1->next;
		}
	}
	return head;
}

struct stud_node* DeleteDoc(struct stud_node* head, int num)
{
	struct stud_node* ptr1, * ptr2;

	if (head == NULL)
		return NULL;          /*�ж��Ƿ�Ϊ������*/
	else if (head->num == num) {    /*�ж�Ҫɾ�����Ƿ�Ϊ��ͷ*/
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

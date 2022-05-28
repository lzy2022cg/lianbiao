List InsertDoc(List head, List stud)
{
	List ptr, ptr1, ptr2;

	ptr = stud;
	ptr2 = head;
	ptr1 = NULL;
	if (head == NULL) {
		head = ptr;
		head->next = NULL;
	}
	else {
		while (ptr->num > ptr2->num && ptr2->next != NULL) {
			ptr1 = ptr2;
			ptr2 = ptr2->next;
		}
		if (ptr->num <= ptr2->num) {
			if (head == ptr2) head = ptr;
			else ptr1->next = ptr;
			ptr->next = ptr2;
		}
		else {
			ptr2->next = ptr;
			ptr->next = NULL;
		}
	}
	return head;
}

List DeleteDoc(List head, int i)
{
	List ptr1, ptr2;

	if (head == NULL) {
		return NULL;
	}
	else if (head->num == i) {
		head = head->next;
	}
	else {
		ptr1 = head;
		ptr2 = head->next;
		while (ptr2 != NULL) {
			if (ptr2->num == i) {
				ptr1->next = ptr2->next;
				free(ptr2);
			}
			else {
				ptr1 = ptr2;
				ptr2 = ptr2->next;
			}
		}
	}
	return head;
}

#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
	/* 因为不能对空链表进行操作，所以先判断head是否为空 */
	if (head == NULL) {
		return 0;
	}
	node* fast_ptr = head->next->next;
	node* slow_ptr = head;
	if (fast_ptr == NULL) {
		return 0;
	}
	/* 因为fast_ptr每次要走两步，所以要判断fast_ptr和fast_ptr->next是否为空  */
	while (fast_ptr != NULL && fast_ptr->next != NULL) {
		if (fast_ptr == slow_ptr) {
			return 1;
		}
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
	}
	return 0;
}

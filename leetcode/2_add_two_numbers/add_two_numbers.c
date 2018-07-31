#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     struct ListNode *next;
 *      * };
 *       */
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	int num, maxl1, maxl2;
	int c = 0;
	struct ListNode *head, *temp, *realhead;
	head = malloc(sizeof(struct ListNode));
	if (head != NULL)
		memset(head, 0, sizeof(struct ListNode));
	realhead = head;
	while( l1 || l2) {
		num = 0;
		if (l1) {
			num = num + l1->val;
			l1 = l1->next;
		}
		if (l2) {
			num = num + l2->val;
			l2 = l2->next;
		}
		num = num + c;
		if (num > 9) {
			c = 1;
			num = num % 10;
		} else
			c = 0;
		head->val = num;
		if ((l1 == NULL) && (l2 == NULL)) {
			head->next = NULL;
			if (c!=0) {
				temp = malloc(sizeof(struct ListNode));
				if (temp != NULL)
					memset(temp, 0, sizeof(struct ListNode));
				temp->val = c;
				head->next = temp;
			}
		} else {
			temp = malloc(sizeof(struct ListNode));
			if (temp != NULL)
				memset(temp, 0, sizeof(struct ListNode));

			head->next = temp;
			head = head->next;
		}
	}
	return realhead;
}
struct ListNode* initNumbers(int len)
{
	struct ListNode *head, *temp, *realhead;
	head = malloc(sizeof(struct ListNode));
	if (head != NULL)
		memset(head, 0, sizeof(struct ListNode));
	realhead = head;
	while(len) {
		//printf("len=%d\n",len);
		head->val = len + 5;
		len--;
		if (len) {
			temp = malloc(sizeof(struct ListNode));
			if (temp != NULL)
				memset(temp, 0, sizeof(struct ListNode));
			head->next = temp;
			head = head->next;
		}
	}
	return realhead;
}
int main()
{
	struct ListNode *head;
	struct ListNode *l1 = initNumbers(1);
	struct ListNode *l2 = initNumbers(1);
#if 1
	for(head=l1;head;head=head->next)
		printf("l1 val=%d\n",head->val);
	for(head=l2;head;head=head->next)
		printf("l2 val=%d\n",head->val);
#endif
	struct ListNode *out = addTwoNumbers(l1,l2);
	for(head=out;head;head=head->next)
		printf("out val=%d\n",head->val);
	return 0;
}

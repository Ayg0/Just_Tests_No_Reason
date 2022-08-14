
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

//void	myStartupFun(void) __attribute__((constructor));
//void	myStartupFun(void)
//{
//    printf("wtf");
//}

struct ListNode {
	int val;
	struct ListNode *next;
};

void	get_num(struct ListNode* head, long *n)
{
	int	i;

	i = 1;
	while (head)
	{
		n[0] *= 10;
		n[0] += head->val;
		n[1] += (head->val * i);
		head = head->next;
		i *= 10;
	}
}

bool isPalindrome(struct ListNode* head){

	long	n[2] = {0};
	get_num(head, n);
	return (n[1] == n[0]);
}

int	main()
{
	struct ListNode* tmp;

	tmp = malloc(sizeof(struct ListNode));
	tmp->val = 1;
	tmp->next = malloc(sizeof(struct ListNode));
	tmp->next->val = 2;
	tmp->next->next = malloc(sizeof(struct ListNode));
	tmp->next->next->val = 2;
	tmp->next->next->next = malloc(sizeof(struct ListNode));
	tmp->next->next->next->val = 1;
	tmp->next->next->next->next = NULL;
	printf("%d\n", isPalindrome(tmp));
}
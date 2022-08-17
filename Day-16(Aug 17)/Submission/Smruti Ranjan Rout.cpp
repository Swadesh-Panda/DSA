#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int count(ListNode *p)
	{
		int ct = 0;
		while (p != NULL)
		{
			ct++;
			p = p->next;
		}
		return ct;
	}

	ListNode *removeNthFromEnd(ListNode *head, int n)
	{
		int size = count(head);
		if (size == 1)
		{
			if (n == 1)
				return NULL;
			else
				return head;
		}
		int fromBegin = size - n; // No of moves;
		if (fromBegin == 0)
			return head->next;
		ListNode *p = head, *q = NULL;
		while (fromBegin--)
		{
			q = p;
			p = p->next;
		}
		q->next = p->next;
		return head;
	}
};

int main()
{
	return 0;
}
//第一题


//Definition for singly-linked list.
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct DListNode {
	int data;
	DListNode* prior;
	DListNode* next;
};

class solution {
public:
	//第一题
    ListNode* mergetwolists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* cur = head;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                cur->next = list1;
                list1 = list1->next;
            }
            else {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }

        if (list2 == nullptr) {
            cur->next = list1;
        }
        else {
            cur->next = list2;
        }

        return head->next;
    }



    //第三题
	ListNode* endlist(ListNode* a, ListNode* b) {
		//判空
		if (a == nullptr || b == nullptr)
			return nullptr;

		//找小
		ListNode* c = new ListNode();
		ListNode* pc = c;
		while (a && b)
		{
			if (a->val < b->val) {
				a = a->next;
			}
			else if (a->val == b->val) {
				pc->next = a;
				a = a->next;
				pc = pc->next;
			}
			else {
				b = b->next;
			}

		}
		return c->next;
	}


	//第六题
	ListNode* findMax(ListNode* list) {
		ListNode* max = list, * cur = list->next;
		while (cur)
		{
			if (max->val >= cur->val) {
				max->val == cur->val;
				cur = cur->next;
			}
			else {
				cur = cur->next;
			}
		}
		return max;
	}


	//第九题
	void change(DListNode* p) {
		DListNode* q = p->prior;

		q->next = p->next;
		p->next = q;
		p->prior = q->prior;
		q->prior = p;
	}
};



int main() {
	void change(DListNode * p);
	return 0;
}
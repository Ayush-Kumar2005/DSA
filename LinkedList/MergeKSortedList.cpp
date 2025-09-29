//------------------------------------------------------------------------------------------------------------------

// ❌ WORST (uses erase at index 0)
// Time:  O(N*K + K^2)  <-- because erase shifts array each time
// Space: O(1)
// Priority: 4 (worst)
// class Solution {
// public:
//     ListNode* mergeLists(ListNode* list1, ListNode* list2) {
//         ListNode* c = new ListNode(0);
//         ListNode* temp3 = c;
//         while (list1 && list2) {
//             if (list1->val <= list2->val) {
//                 temp3->next = list1;
//                 list1 = list1->next;
//             } else {
//                 temp3->next = list2;
//                 list2 = list2->next;
//             }
//             temp3 = temp3->next;
//         }
//         temp3->next = list1 ? list1 : list2;
//         return c->next;
//     }

//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if (arr.size() == 0) return NULL;
//         while (arr.size() > 1) {
//             ListNode* a = arr[0];
//             arr.erase(arr.begin());
//             ListNode* b = arr[0];
//             arr.erase(arr.begin());
//             ListNode* c = mergeLists(a, b);
//             arr.push_back(c);
//         }
//         return arr[0];
//     }
// };

//------------------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------------------

// ✅ pop_back approach (better than erase)
// Time:  O(N * K)
// Space: O(1)
// Priority: 3
// class Solution {
// public:
//     ListNode* mergeLists(ListNode* list1, ListNode* list2) {
//         ListNode* c = new ListNode(0);
//         ListNode* temp3 = c;
//         while (list1 && list2) {
//             if (list1->val <= list2->val) {
//                 temp3->next = list1;
//                 list1 = list1->next;
//             } else {
//                 temp3->next = list2;
//                 list2 = list2->next;
//             }
//             temp3 = temp3->next;
//         }
//         temp3->next = list1 ? list1 : list2;
//         return c->next;
//     }

//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if (arr.size() == 0) return NULL;
//         while (arr.size() > 1) {
//             ListNode* a = arr[arr.size() - 1];
//             arr.pop_back();
//             ListNode* b = arr[arr.size() - 1];
//             arr.pop_back();
//             ListNode* c = mergeLists(a, b);
//             arr.push_back(c);
//         }
//         return arr[0];
//     }
// };

//------------------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------------------

// ✅ Divide & Conquer Approach
// Time:  O(N log K)
// Space: O(1) or O(log K) recursion
// Priority: 2
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         if (!a) return b;
//         if (!b) return a;

//         if (a->val <= b->val) {
//             a->next = mergeTwoLists(a->next, b);
//             return a;
//         } else {
//             b->next = mergeTwoLists(a, b->next);
//             return b;
//         }
//     }

//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         if (lists.empty()) return NULL;
//         int n = lists.size();

//         while (n > 1) {
//             int i = 0, j = n - 1;
//             while (i < j) {
//                 lists[i] = mergeTwoLists(lists[i], lists[j]);
//                 i++;
//                 j--;
//             }
//             n = j + 1;
//         }

//         return lists[0];
//     }
// };

//------------------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------------------

// ✅✅ BEST APPROACH (Min-Heap)
// Time:  O(N log K)
// Space: O(K)
// Priority: 1
// class Solution {
// public:
//     struct compare {
//         bool operator()(ListNode* a, ListNode* b) {
//             return a->val > b->val; // Min-heap
//         }
//     };

//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

//         // Add the head of each list
//         for (auto node : lists) {
//             if (node) minHeap.push(node);
//         }

//         ListNode* dummy = new ListNode(0);
//         ListNode* tail = dummy;

//         while (!minHeap.empty()) {
//             ListNode* top = minHeap.top();
//             minHeap.pop();

//             tail->next = top;
//             tail = tail->next;

//             if (top->next) {
//                 minHeap.push(top->next);
//             }
//         }

//         return dummy->next;
//     }
// };

//------------------------------------------------------------------------------------------------------------------


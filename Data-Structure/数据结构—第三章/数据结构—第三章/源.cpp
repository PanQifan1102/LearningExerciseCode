class Solution {
public:
    bool isPalindrome(string s) {
        string sgood;
        for (char ch : s) {
            if (isalnum(ch)) {
                sgood += tolower(ch);
            }
        }
        string sgood_rev(sgood.rbegin(), sgood.rend());
        return sgood == sgood_rev;
    }
};


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int n = tokens.size();
        for (int i = 0; i < n; i++) {
            string& token = tokens[i];
            if (isNumber(token)) {
                stk.push(atoi(token.c_str()));
            }
            else {
                int num2 = stk.top();
                stk.pop();
                int num1 = stk.top();
                stk.pop();
                switch (token[0]) {
                case '+':
                    stk.push(num1 + num2);
                    break;
                case '-':
                    stk.push(num1 - num2);
                    break;
                case '*':
                    stk.push(num1 * num2);
                    break;
                case '/':
                    stk.push(num1 / num2);
                    break;
                }
            }
        }
        return stk.top();
    }

    bool isNumber(string& token) {
        return !(token == "+" || token == "-" || token == "*" || token == "/");
    }
};

template <typename T>
class CircularQueue {
private:
    std::vector<T> data;
    int front; // 队头指针  
    int rear;  // 队尾指针  
    int capacity; // 队列容量  

public:
    CircularQueue(int k) : front(0), rear(0), capacity(k) {
        data.resize(k);
    }

    // 从队尾删除  
    bool dequeueFromRear() {
        if (isEmpty()) {
            std::cout << "Queue is empty, cannot dequeue." << std::endl;
            return false;
        }
        if (front == rear) {
            // 队列中只有一个元素  
            front = rear = 0;
        }
        else {
            // 队列中有多个元素  
            rear = (rear + 1) % capacity;
        }
        return true;
    }

    // 从队头插入  
    bool enqueueFromFront(const T& value) {
        if (isFull()) {
            std::cout << "Queue is full, cannot enqueue." << std::endl;
            return false;
        }
        front = (front - 1 + capacity) % capacity; 
        data[front] = value;
        return true;
    }

    // 检查队列是否为空  
    bool isEmpty() const {
        return front == rear;
    }

    // 检查队列是否已满  
    bool isFull() const {
        return (rear + 1) % capacity == front;
    }

};

class ListNode {
private:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}

public:
    int findMaxRecursive(ListNode* f) {
        if (f == nullptr) {
            return 0;
        }
        else {
            return std::max(f->val, findMaxRecursive(f->next));
        }
    }

    int countNodesRecursive(ListNode* f) {
        if (f == nullptr) {
            return 0;
        }
        else {
            return 1 + countNodesRecursive(f->next);
        }
    }

    double findAverageRecursive(ListNode* f, int& count) {
        if (f == nullptr) {
            return 0.0;
        }
        else {
            double sum = f->val + findAverageRecursive(f->next, count);
            count++;
            return sum;
        }
    }

    double findAverage(ListNode* f) {
        int count = 0;
        double sum = findAverageRecursive(f, count);
        if (count == 0) {
            return 0.0;
        }
        return sum / count;
    }
};
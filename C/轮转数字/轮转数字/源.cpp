#define _CRT_SECURE_NO_WARNINGS 1
//��ת����
//����һ���������� nums���������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����
//
//ʾ�� 1:
//����: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//��� : [5, 6, 7, 1, 2, 3, 4]
//���� :
//	������ת 1 �� : [7, 1, 2, 3, 4, 5, 6]
//	������ת 2 �� : [6, 7, 1, 2, 3, 4, 5]
//	������ת 3 �� : [5, 6, 7, 1, 2, 3, 4]
//ʾ�� 2 :
//	���룺nums = [-1, -100, 3, 99], k = 2
//	�����[3, 99, -1, -100]
//	���� :
//	������ת 1 �� : [99, -1, -100, 3]
//	������ת 2 �� : [3, 99, -1, -100]

//�������÷�
void reverse(int* a, int left, int right) {
    while (left < right) {
        int tmp = a[left];
        a[left] = a[right];
        a[right] = tmp;

        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;

    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);
}
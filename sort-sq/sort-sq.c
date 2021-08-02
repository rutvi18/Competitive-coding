int* solve(int* A, int n1, int *len1) {
    int *ret = malloc(sizeof(int) * n1);
    int i = n1 - 1;
    *len1 = n1;
    
    int left = 0, right = n1 - 1;
    while(left <= right) {
        if(A[left] < 0) {
            if(-A[left] > A[right]) {
                ret[i--] = A[left] * A[left];
                left++;
            } else {
                ret[i--] = A[right] * A[right];
                right--;
            }
        } else {
            ret[i--] = A[right] * A[right];
            right--;
        }
    }
    return ret;
}

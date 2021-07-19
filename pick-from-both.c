/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int* A, int n, int B) {
    int sum = 0;
    int i = 0;
    for(i = 0;i<B;i++){
        sum = sum + A[i];
    }
    int max = sum;
    int j = 1;
    for(i=B-1;i>=0;i--){
        sum = sum - A[i] + A[n-j];
        j=j+1;
        if (sum > max){
            max = sum;
        }
        else{
            continue;
        }
    }
    return max;
}


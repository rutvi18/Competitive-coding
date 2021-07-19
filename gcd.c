/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int gcd(int A, int B) {
     while(A != 0){
        int temp = B;
        B = A;
        A = temp%A;
    }
    
    return B;
}

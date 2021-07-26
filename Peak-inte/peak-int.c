/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int perfectPeak(int* A, int n1) {
    int i,j,idx=0;
    int max;
    int result =0;
    if(n1 <3)
    {
        return result;
    }
    max =A[0];
    for(i=1;i<n1-1;i++)
    {
        if(A[i] > max)
        {
            max = A[i];
            idx =i;
            for(j=i+1;j<n1;j++)
            {
                if(A[j] < max)
                {
                    break;
                }
            }
            if(j==n1)
            {
                return 1;
            }
        }
       
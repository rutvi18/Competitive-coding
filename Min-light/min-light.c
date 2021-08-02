int solve(int* A, int n1, int B) {
    int i = 0;
    int *arr = (int *)malloc(n1*sizeof(int));
    int size = 0;
    int count =0;
    int res = 0;
    
    for(i = 0; i < n1 ; i++){
        if(A[i] == 1){
            size = B-1;
            arr[i] = 1;
        }
        else if(A[i] == 0 && size > 0){
            arr[i] = 1;
            size--;
        }
        else
            arr[i] = 0;
    }
    
    for(i = n1-1; i >= 0 ; i--){
        if(A[i] == 1){
            size = B-1;
            arr[i] = 1;
        }
        else if(A[i] == 0 && size > 0){
            arr[i] = 1;
            size--;
        }
        if(arr[i] == 1)
            count++;
        if(arr[i] == 0)
        return -1;
    }
    
   //printf("count%d", count);
    if(count < n1)
        return -1;
        
    res = (n1+(B*2)-2)/((B*2)-1);
    return res;
}

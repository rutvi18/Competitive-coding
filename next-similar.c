/**
 * @input A : String termination by '\0'
 * 
 * @Output string. Make sure the string ends with null character
 */
char *sort(char *string,int a,int b)
{
    int i,j;char temp;
    for (i = a; i < b-1; i++) 
    {
      for (j = i+1; j < b; j++) 
      {
         if (string[i] > string[j]) 
         {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   return string;
}
char* solve(char* A) 
{
    int i=0;int len=strlen(A);int desc=1,digit,index,min=INT_MAX,min_index;
    while(A[i]!='\0' && i<len-1)
    {
        if(A[i+1]>A[i])
        {
            desc=0;
            break;
        }
            i++;
            
    }
    if(desc==1)
    return "-1";
    else
    {
       for(i=len-1;i>=0;i--)
       {
           if(A[i-1]<A[i])
           {
           digit=A[i-1];
           index=i-1;
           break;
           }
       }
      // printf("digit=%d at index=%d\n",digit,index);
       
       for(i=index+1;i<=len-1;i++)
       {
           if(A[i]<min && A[i]>A[index])
           {
           min=A[i];
           min_index=i;
           }
       }
       //printf("min=%d at min_index=%d\n",min,min_index);
       A[index]=min;
       A[min_index]=digit;
       //printf("A[index]=%d A[min_index]=%d\n",A[index],A[min_index]);
       A=sort(A,index+1,len);
       
    }
    return A;
}

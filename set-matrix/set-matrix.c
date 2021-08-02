void setZeroes(int** a, int n11, int n12)
{
  int row[n11];
  int col[n12];
  
  int i,j;
  for(i=0;i<n11;i++)
  {
      row[i]=1;
  }
  for(i=0;i<n12;i++)
  {
      col[i]=1;
  }
  for(i=0;i<n11;i++)
  {
      for(j=0;j<n12;j++)
      {
          if(a[i][j]==0)
          {
              row[i]=0;
              col[j]=0;
          }
      }
  }
  for(i=0;i<n11;i++)
  {
      for(j=0;j<n12;j++)
      {
          if(row[i]==0 || col[j]==0)
          {
              a[i][j]=0;
          }
      }
  }
}

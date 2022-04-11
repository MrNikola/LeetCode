void merge(int* n1, int nums1Size, int m, int* n2, int nums2Size, int n){
    
    int i,j=0,temp;
    for(i =m;i<m+n;i++)
    {
        n1[i] = n2[j];
        j++;
    }
     for ( i=0;i<m+n;i++)
    {
        for(j=0;j<m+n-i-1;j++)
        {
          if (n1[j]>n1[j+1])
          {
              temp = n1[j];
              n1[j] = n1[j+1];
              n1[j+1] = temp;
          }
        }
    }  
}
    
    
    
    
    
    
    
    
    
    
    
    
   /* for(i=0;i<m;i++){
            if(n1[i]>n2[j]){
                l=nums1Size-1;
                while(l>i){
                    n1[l]=n1[l-1];
                    l--;
                }
                n1[i]=n2[j];
                j++;
            }
            else
                n1[i]=n1[i];
        }i++;
    while(j<n){
        n1[i]=n2[j];
        i++;
        j++;
    }
}*/
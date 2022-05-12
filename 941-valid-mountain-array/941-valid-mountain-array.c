

bool validMountainArray(int* arr, int arrSize){

   int i=0;
    while(i<arrSize-1 && arr[i]<arr[i+1])
        i++;
    if(i==0 || i+1==arrSize)
        return false;
    while(i<arrSize-1 && arr[i]>arr[i+1])
        i++;
   return i==arrSize-1;
}



void duplicateZeros(int* arr, int arrSize){

    int i;
    for(i=0;i<arrSize;i++){
        if(arr[i] == 0){
            int d=arrSize-1;
            while(d>i){
                arr[d]=arr[d-1];
                d--;
            }
        i++;
        }
    }
}


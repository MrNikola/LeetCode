

int maximumWealth(int** accounts, int acSize, int* acColSize){
    
int maxV = 0;
    for (int i = 0; i < acSize; i++) {
        int NVMax = 0;
        for (int j = 0; j < *acColSize; j++) {
            NVMax += accounts[i][j]; 
        }
        if (NVMax > maxV)
            maxV = NVMax;
    }
    return maxV;
}
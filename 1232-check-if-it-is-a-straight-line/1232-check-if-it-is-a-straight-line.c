bool checkStraightLine(int** str, int sz, int* coordinatesColSize){

    int dx,dy,ndx,ndy,i;
    dx = str[1][0] - str[0][0];
    dy = str[1][1] - str[0][1];
    
    for(i=2;i<sz;i++)
    {
        ndx = str[i][0] - str[0][0];
        ndy = str[i][1] - str[0][1];
        if(dx*ndy != dy*ndx)
            return false;
    }
    return true;
}


int finalValueAfterOperations(char ** op, int operationsSize){
    int x=0;
    for(int i=0;i<operationsSize;i++){
        if(!strcmp(op[i],"--X") || !strcmp(op[i],"X--"))
            x-=1;
        else
            x+=1;
    }
    return x;
}